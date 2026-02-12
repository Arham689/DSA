class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // sort the word and stor it , if found then it s a anagrams then createa
        vector<vector<string>> ans; 

        unordered_map< string , vector<string>> m ; 

        for (int i = 0 ; i < strs.size() ; i++ ) {

            // sort the str ,
            string s = strs[i];

            sort(s.begin() , s.end() );
            
            m[s].push_back(strs[i]);

        }

        for(auto x : m){

            ans.push_back(x.second);
        }

        return ans ; 
    }
};
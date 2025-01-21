class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> m ; 
        int i = 0 ; 
        int j = 0 ; 
        int maxi = 0 ; 
        while(j < s.length()){
            if(m.find(s[j]) != m.end()){
                m.erase(s[i]);  
                i++;
            }
            else{
                m.insert(s[j]);
                j++;
            }
            maxi = max(maxi , (j - i) );
        }

        return maxi ; 
    }
};
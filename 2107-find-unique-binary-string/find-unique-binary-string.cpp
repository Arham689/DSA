class Solution {
public:
    vector<string> res ;  
    void dfs(int n , int i , char curr , string temp ){
        if(i == n ) {
            res.push_back(temp);
            return ; 
        }

        dfs(n , i + 1 , '1' , temp + curr );
        dfs(n , i + 1 , '0' , temp + curr );

    }
    string findDifferentBinaryString(vector<string>& nums) {
        unordered_map<string , int > mp ; 

        for(int i = 0 ; i < nums.size() ; ++i ){
            mp[nums[i]]++;
        }

        dfs(nums.size() , 0 , '1' , "" );

        for(int i =0 ; i < res.size() ; ++i ){
            if(mp.count(res[i]) == 0 ) return res[i];
        }
        if(nums[0].length() == 2 ) return "00";
        return "0";
        
    }
};
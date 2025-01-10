class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& arr) {

        vector<vector<int>> ans ; 
        set<vector<int>> s ; 
        
        if( arr.size() == 3 &&  arr[0] + arr[1] + arr[2] != 0 ) return ans ;
        
        sort(arr.begin() , arr.end() ) ; 

        for(int i = 0 ; i < arr.size() - 2  ; i++){
            vector<int> temp ; 

            int j = i +1 ; 
            int k = arr.size() -1 ; 

            int sum = 0;
            while(j < k )
            {
            sum = arr[i] + arr[j] + arr[k] ;
            if(sum > 0)
            {
                k-- ;
            }
            else if(sum < 0)
            {
                j++; 
            }
            else if(sum == 0)
            {
                s.insert({arr[i] , arr[j] , arr[k]});
                j++ ; k-- ;
            }
            }

        }

        for(auto x  : s ) ans.push_back(x) ; 
        return ans ;
    }
};
class Solution {
public:
    int countPartitions(vector<int>& arr) {
        int sum = 0 ; 

        for(int i = 0 ; i < arr.size() ; i++ ){
            sum += arr[i];
        }

        int ans= 0 ; 
        int r = 0 ; 
        int l = 0 ; 
        for(int i = 0 ; i < arr.size() - 1; i++ ){
            l += arr[i];
            r = sum - l;
            int diff = l - r; 
            cout<<diff;
            if(diff % 2 == 0 ){
                ans++ ; 
            }
        }
        

        return ans ; 

    }
};
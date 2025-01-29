class Solution {
public:
    int subarraySum(vector<int>& arr) {
        int s = 0 ; 
        vector<int> v ; 
        for(int i = 0 ; i < arr.size() ; i++ ){
            s = max( 0 , i - arr[i]);
            int sum = 0 ; 
            for(int j = s ; j <= i ; j++ ){
                sum += arr[j];
            }
            v.push_back(sum);
        }

        int ans =0 ; 
        for(auto x : v ){
            ans += x; 
        }

        return ans ; 

    }
};
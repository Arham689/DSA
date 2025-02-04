class Solution {
public:
    int maxAscendingSum(vector<int>& arr) {
        if(arr.size() == 1 ) return arr[0];

        int sum = arr[0];
        int maxi = arr[0];
        for(int i = 1 ; i < arr.size() ; i++ ){
            if(arr[i-1] < arr[i] ){
                sum += arr[i];
                maxi = max(maxi , sum );
            }
            else{
                sum = arr[i];
            }
        }

        return maxi ;
    }
};
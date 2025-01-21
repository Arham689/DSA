class Solution {
public:
    double findMaxAverage(vector<int>& arr, int k) {
        double sum = 0 ; 

        for(int i = 0 ; i < k  ; i++ )
        {
            sum += arr[i] ;
        }

        double maxi = sum ; 

        for(int i = k ; i < arr.size() ; i++)
        {
            sum += arr[i];
            sum -= arr[i - k ];
            maxi = max(sum , maxi ) ;
        }

        return maxi /k ; 
    }
};
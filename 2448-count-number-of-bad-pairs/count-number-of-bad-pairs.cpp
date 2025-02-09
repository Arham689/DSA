class Solution {
public:
    long long countBadPairs(vector<int>& arr) {
        long long n = arr.size() ; 
        long long good_pair = 0 ; 
        long long total_pair = n * (n-1 )/ 2 ; 
        map<long long , int > m ; 

        for(int i = 0 ; i < n ; i++){
            if(m.count(arr[i] - i) )
                good_pair += m[arr[i] - i] ; 
            m[arr[i] - i]++;
        }

        return total_pair - good_pair;
    }
};
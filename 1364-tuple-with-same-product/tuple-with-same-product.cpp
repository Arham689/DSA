class Solution {
public:
    int tupleSameProduct(vector<int>& arr) {
        unordered_map<int , int > m ;
        
        for(int i = 0 ; i < arr.size() ; i++ ){
            for(int j = i + 1 ; j < arr.size() ; j++ ){
                int p = arr[i] * arr[j];
                m[p]++;
            }
        }

        int ans = 0 ; 
        for(auto& [prod , cnt ] : m ){
            if(cnt > 1 ){
                ans += (cnt * (cnt - 1) / 2) * 4;
            }
        }

        return ans * 2; 
    }
};
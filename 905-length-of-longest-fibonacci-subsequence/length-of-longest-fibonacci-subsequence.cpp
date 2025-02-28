class Solution {
public:
    int lenLongestFibSubseq(vector<int>& arr) {
        int n = arr.size() ; 
        // inster all in a set 
        unordered_set<int> s(arr.begin() , arr.end());
        int maxl = 0 ; 
        for(int i =0 ; i < n -1 ; ++i){
            for(int j = i+1 ; j < n ; ++j ){
                
                int a = arr[i];
                int b = arr[j];
                int fibl = 2 ; 
                while(s.count(a + b ) > 0){
                    int sum = a + b ; 
                    a = b ; 
                    b = sum ;
                    fibl++ ;
                }
                if(fibl > 2)
                maxl = max(maxl , fibl );
            }
        }
        return maxl;
    }
};

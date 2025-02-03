class Solution {
public:
    int longestMonotonicSubarray(vector<int>& arr) {
        if(arr.size() == 1 ) return 1 ; 
        
        int inc = 1 ; 
        int dec = 1 ; 
        int maxi = 1 ; 

        for(int i = 1 ; i < arr.size() ; i++ ){
            if(arr[i-1] < arr[i]){
                inc++;
                dec = 1 ; 
                maxi = max(maxi , inc );
            }
            else if(arr[i-1] > arr[i]){
                dec++; 
                inc = 1 ;
                maxi = max(maxi , dec);
            }
            else{
                inc = 1 ; 
                dec = 1 ; 
            }
        }

        return maxi; 
    }
};
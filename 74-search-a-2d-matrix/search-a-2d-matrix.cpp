class Solution {
public:
    bool searchMatrix(vector<vector<int>>& arr, int t) {
        // binary search 
        int N = arr.size() ; 
        int M = arr[0].size() ;
        
        int start = 0 , end = N*M-1 , mid ; 
        int col_ind , row_ind ; 

        while(start <= end ){
            mid = start+(end - start ) / 2 ; 
            row_ind = mid / M ; 
            col_ind = mid % M ; 
            if( arr[row_ind][col_ind] == t  ) return true ; 
            else if( arr[row_ind][col_ind] < t){
                start = mid + 1 ; 
            }
            else{
                end = mid - 1; 
            }
        }

        return false ; 
    }
};
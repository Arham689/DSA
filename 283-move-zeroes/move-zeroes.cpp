class Solution {
public:
    void moveZeroes(vector<int>& arr) {
        int x = 0 ; 
        for(int i = 0 ; i < arr.size() ; i++ ){
            if(arr[i] != 0 )
            {
                arr[x] = arr[i];
                x++;
            }
        }

        for(int i = x ; i < arr.size() ; i++ )
        {
            arr[i] = 0 ;
        }
        
    }
};
class Solution {
public:
    void sortColors(vector<int>& arr) {
        int l = 0, r = arr.size()-1  , m = 0 ;
        while( m <= r )
        {
            if(arr[m] == 0){
                swap(arr[m] , arr[l]);
                m++;l++;
            }
            else if(arr[m] == 2 ){
                swap(arr[m] , arr[r]);
                r--;
            }
            else{
                m++;
            }
        }
    }
};
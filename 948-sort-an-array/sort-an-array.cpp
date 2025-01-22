class Solution {
public:

    void merg(vector<int>& arr , vector<int>& temp , int start ,int mid , int end )
    {
        int i = start ; 
        int j = mid + 1 ; 
        int k = start ; // for temp 

        while(i <= mid && j <= end)
        {
            if(arr[i] < arr[j])
            {
                temp[k++] = arr[i++];
            }
            else
            {
                temp[k++] = arr[j++];
            }
        }

        while(i <= mid ) temp[k++] = arr[i++]; 
        while(j <= end ) temp[k++] = arr[j++]; 

        while(start <= end )
        {
            arr[start] = temp[start];
            start++ ;
        }

    }
    void mergsort(vector<int>& arr , vector<int>& temp , int start , int end )
    {
        if(start >= end ) return ;

        int mid = (start + end ) / 2 ;
        mergsort(arr , temp , start , mid );
        mergsort(arr , temp , mid +1  , end );
        merg(arr , temp , start , mid , end );
    }
    vector<int> sortArray(vector<int>& arr) {
        
        vector<int> temp(arr.size() , 0 );
        mergsort(arr , temp , 0 , arr.size()-1 );
        return arr ;
    }
};
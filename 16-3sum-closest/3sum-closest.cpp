class Solution {
public:
    int threeSumClosest(vector<int>& arr, int target) {
        sort(arr.begin() , arr.end() );
        int mini = arr[0] + arr[1] + arr[2] ; 
        int n = arr.size() ; 
        for(int i = 0 ; i < n - 2 ; i++)
        {
            int j = i + 1 ;
            int k = n - 1 ;
            while(j < k )
            {
                int temp = arr[i] + arr[j] + arr[k] ;
                if(abs((mini - target )) > abs((temp - target)))
                {
                    mini = temp ; 
                }
                
                if(temp > target ){
                    k--;
                }
                else if(temp < target){
                    j++;
                }
                else{
                    return temp ; 
                }
            }
        }

        return mini ; 
    }
};
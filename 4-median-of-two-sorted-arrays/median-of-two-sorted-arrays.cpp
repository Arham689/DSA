class Solution {
public:
    double findMedianSortedArrays(vector<int>& arr1, vector<int>& arr2) {
        vector<int> arr ; 
        int n = arr1.size() ; 
        int m = arr2.size() ; 

        int i = 0 ; 
        int j = 0 ; 
        while(i < n && j < m ){
            if(arr1[i] < arr2[j]){
                arr.push_back(arr1[i]);
                i++;
            }
            else{
                arr.push_back(arr2[j]);
                j++;
            }
        }

        while(i < n ){
            arr.push_back(arr1[i]);
            i++;
        }

        while(j < m ){
            arr.push_back(arr2[j]);
            j++;
        }
        int len = arr.size() ; 
        double ans = len % 2 == 0 ? (float) (arr[ len / 2 ] + arr[(len / 2 ) - 1 ]) / 2  : arr[len / 2 ] ;
        return ans ;
    }
};
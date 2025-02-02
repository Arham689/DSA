class Solution {
public:
    bool check(vector<int>& arr) {
        vector<int> temp = arr ; 
        sort(temp.begin() , temp.end() );

        for(int i =0 ; i < arr.size() ; i++ ){
            
            
            for(int j = 0 ; j < arr.size() ; j++){
                if(temp[j] != arr[j] ) {
                    break;
                }
                else{
                    if(j == arr.size() -1 ) return true ; 
                }
            }

            int t = temp[temp.size() -1 ];
            temp.erase(temp.end() - 1 );
            temp.insert(temp.begin() , t );
        }

        return false ; 

    }
};
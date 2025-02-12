class Solution {
public:
    int digi_sum(int x ){
        int sum = 0 ; 
        while(x){
            sum += x%10 ; 
            x = x/10 ;
        }
        return sum ; 
    }
    int maximumSum(vector<int>& arr) {
        unordered_map<int , int > m ; 
        int sum = -1 ; 

        for(int i =0 ; i < arr.size() ; ++i){
            int temp = digi_sum(arr[i]);
            cout<<temp<<endl; 
            int matched = 0 ; 
            cout<<matched<<endl; 
            if(m.find(temp) != m.end()){
                cout<<"matched"<<endl; 
                matched = arr[i] + m[temp];
                sum = max(sum , matched );
                if(arr[i] > m[temp]){
                    m[temp] = arr[i];
                }
            }
            else{
                m[temp] = arr[i];
            }
        }

        return sum ; 
    }
};
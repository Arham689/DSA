class Solution {
    #define ll long long 
public:
    int minOperations(vector<int>& arr, int k) {
        priority_queue<ll , vector<ll> , greater<ll>> min_heap(arr.begin() , arr.end());
        int count = 0 ; 
        while(!min_heap.empty()){
            ll min1 = min_heap.top() ; 
            min_heap.pop();
            if(min1 >= k ) break ; 

            ll min2 = min_heap.top(); 
            min_heap.pop();

            min_heap.push((min(min1, min2) * 2 + max(min2, min1)));
            count++;
        }

        return count ;
    }
};
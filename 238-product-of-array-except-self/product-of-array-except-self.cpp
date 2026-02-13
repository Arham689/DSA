class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pre ; 
        vector<int> post(nums.size() , 1 ) ; 
        pre.push_back(1);
        for(int i = 0 ; i < nums.size() ; i++ ){
            pre.push_back(pre[i] * nums[i]);
        }
        
        for(int i = nums.size() - 1 ; i > 0 ; i-- ){
            post[i-1] = nums[i] * post[i];
        }

        for(int i = 0 ; i < nums.size() ; i++ ){
            nums[i] = post[i] * pre[i];
        }

        return nums ;
    }
};
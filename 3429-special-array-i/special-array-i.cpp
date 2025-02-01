class Solution {
public:
    bool isArraySpecial(vector<int>& nums) {
        
        for(int i = 0 ; i < nums.size()-1 ; i++ ){

            int j = i + 1 ; 

            if( !((nums[i]%2 == true && nums[j]%2 == false) || (nums[i]%2 == false && nums[j]%2 == true)) ){
                return false ;
            }
        }

        return true ; 
    }
};
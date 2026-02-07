class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int , int> m ;

        int x= 0 ;
        for (int i = 0 ; i < nums.size() ; i++ ){
            // arr[i] + x = t 
            // x = t - arr[i]

            x = target - nums[i];

            // find this in map or if not there then stor it with the indesx ;

            if ( auto it = m.find(x) ; it != m.end() )
            {
                //found
                return vector<int> {i , it->second };
            } 
            else {
                // not found 
                m[nums[i]] = i ; 
            }
        }
        return {} ;
    }
};
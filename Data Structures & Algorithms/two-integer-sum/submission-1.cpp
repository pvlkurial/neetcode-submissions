class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> indices;        
        for(int i = 0 ; i < nums.size() ; i ++){
            int needed = target - nums[i];
            auto it = indices.find(needed);
            if(it != indices.end()){
                return {it->second, i};
            }

            indices.insert({nums[i], i});
            
        }
            
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        map<int, int> indices;        
        for(int i = 0 ; i < nums.size() ; i ++){
            int needed = target - nums[i];
            auto it = indices.find(needed);
            if(it != indices.end()){
                vector<int> ret = {it->second, i};
                return ret;
            }

            indices.insert({nums[i], i});
            
        }
            
    }
};

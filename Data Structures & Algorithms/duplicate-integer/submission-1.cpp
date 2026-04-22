class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::set<int> seen;
        for(auto i : nums){
            if(!seen.insert(i).second) return true;
        }
        return false;
    }
};
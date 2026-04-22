class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size()) return false;
        std::unordered_map<char, int> ag;
        for(char c : s){
            ag[c]++;
        }
        for(char c : t){
            if(!(ag[c]) || ((--(ag[c])) < 0)) return false;
        }
        return true;
    }
};

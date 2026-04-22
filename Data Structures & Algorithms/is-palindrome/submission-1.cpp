class Solution {
public:
    bool isPalindrome(string s) {
        auto n = s.size();
        int start = 0;
        while(start < n){
            if(!isalnum(s[start])){
                start++;
                continue;
            }
            if(!isalnum(s[n])){
                n--;
                continue;
            }
            if(tolower(s[start]) != tolower(s[n])) return false;
            start++;
            n--;
        }
        return true;
    }
};

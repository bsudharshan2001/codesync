class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        
        string prefix = strs[0];
        
        for (size_t i = 1; i < strs.size(); ++i) {
            size_t j = 0;
            while (j < prefix.length() && j < strs[i].length() && prefix[j] == strs[i][j]) {
                ++j;
            }
            prefix = prefix.substr(0, j);
            if (prefix.empty()) {
                return "";
            }
        }
        
        return prefix;
        
    }
};
class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
    vector<int> alphabets(26, INT_MAX);
    vector<string> result;
    
    for (int i = 0; i < words.size(); i++) {
        vector<int> temp(26, 0);
        for (int j = 0; j < words[i].size(); j++) {
            temp[words[i][j] - 'a']++;
        }
        for (int k = 0; k < 26; k++) {
            alphabets[k] = min(alphabets[k], temp[k]);
        }
    }
    
    for (int i = 0; i < alphabets.size(); i++) {
        if (alphabets[i] > 0) {
            for (int j = 0; j < alphabets[i]; j++) {
                result.push_back(string(1, 'a' + i));
            }
        }
    }
    
    return result;
    }
};
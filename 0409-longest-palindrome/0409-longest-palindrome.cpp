class Solution {
public:
    int longestPalindrome(string s) {
        if(s.size()==1)
            return 1;

        unordered_map <char,int> charCount;
        int out=0;

        for(char c:s){
            charCount[c]++;
            if(charCount[c]%2==0)
                out+=2;

        }
        for (const auto& pair : charCount){
            if(pair.second%2!=0){
                out+=1;
                break;
            }
        } 
                
        return out;
        
    }
};
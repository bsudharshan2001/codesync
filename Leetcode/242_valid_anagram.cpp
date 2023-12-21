#include<bits/stdc++.h>
using namespace std;

#define ll long long


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
            return false;
        vector<int> count(26, 0);
        for (char ch : s) 
            count[ch - 'a']++;
        
        for (char ch : t)
            count[ch - 'a']--;

        // for (char ch : s){
        //     count[ch - 'a']++;
        //     count[ch - 'a']--;
        // }
        
        for (int c : count) 
            if (c != 0) 
                return false;
        
        return true;
    }
};

int main(){
    Solution sol;
    string s,t;
    cin>>s>>t;
    cout<<sol.isAnagram(s,t);
    return 0;
}
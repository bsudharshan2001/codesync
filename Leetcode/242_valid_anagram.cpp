#include<bits/stdc++.h>
using namespace std;

#define ll long long


class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length()!=t.length())
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
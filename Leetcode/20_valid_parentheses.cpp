#include<bits/stdc++.h>
using namespace std;

// Characters => { , ( , [ 
//Doesnt work for nested structures
// class Solution {
// public:
//     bool isValid(string s) {
//         stack<char> st;
//         for(int i=0;i<s.length()-1;i++){
//             st.push(s[i]);
//             if(st.top()=='(' && s[i+1]==')')
//                 st.pop();
//             else if(st.top()=='{' && s[i+1]=='}')
//                 st.pop();
//             else if(st.top()=='[' && s[i+1]==']')
//                 st.pop();
//         }
//         if(st.empty())
//             return true;
//         return false;
//     }
// };
//works for nested structures
class Solution {
public:
    bool isValid(string s) {
    stack<char> st;
    for (int i = 0; i < s.length(); i++) {
        if (!st.empty()) {
            if ((st.top() == '(' && s[i] == ')') ||
                (st.top() == '{' && s[i] == '}') ||
                (st.top() == '[' && s[i] == ']')) {
                st.pop();
                continue;
            }
        }
        st.push(s[i]);
    }
    return st.empty();
}

};

int main(){
    Solution sol;
    string s;
    cin>>s;
    cout<<sol.isValid(s);
    return 0;
}
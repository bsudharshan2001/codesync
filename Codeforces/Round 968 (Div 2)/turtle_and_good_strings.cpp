#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        string s;
        cin >> s;
        bool ans = true;
        for (int i = 0; i < n - 1; i++) {
            if (s[i] == s[i + 1]) {
                ans = false;
                break;
            }
        }
        if (ans) {
            cout << "yes" << endl;
        } else {
            cout << "no" << endl;
        }
    }

    return 0;

}
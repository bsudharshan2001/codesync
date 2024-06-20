#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n, prev, s = 0;
    cin >> n;

    if (n == 1) {
        cout << 0;
        return 0;
    }

    cin >> prev;
    for(int i = 1; i < n; i++) {
        int a;
        cin >> a;
        if (prev > a) {
            s += (prev - a);
        } else {
            prev = a;
        }
    }
    cout << s;
    return 0;
}

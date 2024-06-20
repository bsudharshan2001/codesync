#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n;
    cin>>n;
    set <ll> s;
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        s.insert(a);
    }
    cout<<s.size();
    
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n,m,k;
    cin>>n>>m>>k;
    vector<ll> apps(n),aparts(m);
    for (int i = 0; i < n; i++)
    {
        int a;
        cin>>a;
        apps.push_back(a);
    }
    for (int i = 0; i < m; i++)
    {
        int a;
        cin>>a;
        aparts.push_back(a);
    }

    sort(apps.begin(),apps.end());

    sort(aparts.begin(),aparts.end());

    ll i=0,j=0,ans=0;
    while(i<n && j<m){
        if(abs(apps[i]-aparts[j])<=k){
            i++;
            j++;
            ans++;
        }
        else if(apps[i]<aparts[j]){
            i++;
        }
        else{
            j++;
        }
    }

    cout<<ans;
    
    return 0;
}
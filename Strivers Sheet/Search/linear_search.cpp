#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, val;
    int a[n];
    cin>>n>>val;
    for(int i=0;i<n;i++)
        cin>>a[i];

    for(int i=0;i<n;i++){
        if(a[i]==val)
            cout<<i;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,sum=0,r;
    cin>>n;
    int org=n;
    while(n>0){
        r=n%10;
        // cout<<r;
        n=n/10;
        sum+=r*r*r;
    }
    // cout<<sum;
    // cout<<org;
    if(sum==org)
        cout<<"Amstrong Number";
    else cout<<"Not a Amstrong Number";
    return 0;
}
// Missing Number
// You are given all numbers between 1,2,\ldots,n except one. Your task is to find the missing number.

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n,sum=0;
    cin>>n;
    for(int i=1;i<n;i++){
        int a;
        cin>>a;
        sum+=a;
    }
    cout<<(n*(n+1)/2)-sum;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int a,b,n=0,flag;
    cin>>a>>b;
    while(n<a && n<b){
        if(a%n==0 && b%n==0)
            flag=n;
        cout<<n;
        n++;
    }
    cout<<flag;
    cout<<"hello";
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll n,prev,s=0;
    cin>>n;
    cin>>prev;
    // cout<<"First Ele "<<prev<<"\n";
    // cout<<"---------------------------"<<"\n";
    for(int i=0;i<n-1;i++){
        int a;
        cin>>a;
        // cout<<"cur Ele "<<a<<"\n";
        if(prev>a){
            // cout<<prev<<" "<<a<<"\n";
            s+=prev-a;
            // cout<<"diff "<<s<<"\n";
            prev=a;
            // cout<<"prev is now "<<prev<<"\n";
            // cout<<"---------------------------"<<"\n";
        }
         else {//cout<<prev<<" "<<a<<"\n";
        //     cout<<"prev element not larger"<<"\n";
        // cout<<"---------------------------"<<"\n";
        prev=a;
        }
    }
    cout<<s;
    return 0;
}
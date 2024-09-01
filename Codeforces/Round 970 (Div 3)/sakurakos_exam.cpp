#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;

        int sum=a+2*b;

        if(sum%2==0 && a>=(sum/2)%2) {
            cout<<"YES"<<endl;
        }
        else if(a==0){
            if(b%2== 0) {
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else if(b==0){
            if(a%2==0){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }else{
            if(a%2==0){
                cout<<"YES"<<endl;
            }else if(b%2==0 && a>=2){
                cout<<"YES"<<endl;
            } else{
                cout<<"NO"<<endl;
            }
        }
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    string str;
    cin>>str;
    int c=1,l=-9999;
    if(str.length()==1){
        cout<<1;
        return 0;}
    for(int i=0;i<str.length()-1;i++){
        // cout<<"check";
        if(str[i]==str[i+1]){
            c+=1;
            // cout<<c;
            if(c>l)
                l=c;}
        else {c=1;
        if(c>l)
        l=c;}
    }
    cout<<l;
    return 0;
}
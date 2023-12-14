#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    string str;
    cin>>str;
    int c=1,l=0;
    for(int i=0;i<str.length()-1;i++){
        if(str[i]==str[i+1])
            c+=1;
            cout<<c;
            if(c>l)
                l=c;
        else c=1;
    }
    cout<<l;
    return 0;
}
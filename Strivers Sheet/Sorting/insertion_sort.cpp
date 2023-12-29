#include<bits/stdc++.h>
using namespace std;


//Time Complexity
// Best Case -> O(n)
// Average Case -> O(n^2)
// Worse Case -> O(n^2)


int main(){
    int n,temp,key;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=1;i<n;i++){
        key=a[i];
        int j=i-1;

        while(key<a[j] && j>=0){
            a[j+1]=a[j];
            --j;
        }
        a[j+1]=key;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

//Selection Sort
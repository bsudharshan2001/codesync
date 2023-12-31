#include<bits/stdc++.h>
using namespace std;

//Time Complexity
// Best Case -> O(n^2)
// Average Case -> O(n^2)
// Worse Case -> O(n^2)

int main(){
    int n,temp,min;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=0;i<n-1;i++){
        min=i;
        for(int j=i+1;j<n;j++){
            if(a[j]<a[min])
                min=j;
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}

//Selection Sort
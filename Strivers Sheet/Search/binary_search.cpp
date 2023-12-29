#include<bits/stdc++.h>
using namespace std;


//Time Complexity
// Best Case -> O(1)
// Average Case -> O(logn)
// Worse Case -> O(logn)

//Iterative Method
// int binarySearch(int a[],int val, int low, int high){
//     while(low<=high){
//         int mid=(low+high)/2;
//         if(a[mid]==val)
//             return mid;
//         else if(a[mid]<val)
//             low=mid+1;
//         else high=mid-1;
//     }
//     return -1;
// }

// Recursive Method
int binarySearch(int a[],int val, int low, int high){
    if(low<=high){
        int mid=(low+high)/2;
        if(a[mid]==val)
            return mid;
        else if(a[mid]>val)
            return binarySearch(a,val,low,mid-1);
        else return binarySearch(a,val,mid+1,high);
    }
    return -1;
}

int main(){
    int n, val;
    cin>>n>>val;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<binarySearch(a,val,0,n-1); 
    return 0;
}
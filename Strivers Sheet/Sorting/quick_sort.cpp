#include<bits/stdc++.h>
using namespace std;

//Time Complexity
// Best Case -> O(nlogn)
// Average Case -> O(nlogn)
// Worse Case -> O(n^2)

//Space Complexity -> O(logn)

void swap(int *a, int *b){
    int t=*a;
    *a=*b;
    *b=t;
}

//this function is to rearrange the array and find the pivot point
int partition(int a[],int p, int r){

    //selecting the rightmost element as pivot
    int pivot=a[r];

    int i=p-1;

    //Traversing each element and comparing with pivot
    for(int j=p;j<r;j++){
        if(a[j]<=pivot){
            //if element smaller than pivot is found 
            //swap it with the greater element pointed by i
            i++;

            //swap with grater element at i
            swap(&a[i], &a[j]);
        }
    }
    //swap pivot with greater element at i
    swap(&a[i+1], &a[r]);

    return i+1;
}


void quickSort(int a[], int p, int r){
    if(p<r){
        int q=partition(a,p,r);
        quickSort(a,p,q-1);
        quickSort(a,q+1,r);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    quickSort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
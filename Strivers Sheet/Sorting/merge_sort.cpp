#include<bits/stdc++.h>
using namespace std;

void merge(int a[],int p,int q,int r){

    //For creation of two arrays L<- a[p..q] and M<- a[q+1...r]
    int n1= q-p+1;
    int n2= r-q;

    int L[n1], M[n2];

    for(int i=0;i<n1;i++)
        L[i]=a[p+i];
    for(int j=0;j<n2;j++)
        M[j]=a[q+1+j];
    

    //Maintain current index of sub-arrays and main-arrays
    int i,j,k;
    i=0;
    j=0;
    k=p;

    while(i<n1 && j<n2){
        if(L[i]<=M[j]){
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=M[j];
            j++;
        }
        k++;
    }
    // When we run out of elements in either L or M,
    // pick up the remaining elements and put in A[p..r]

    while(i<n1){
        a[k]=L[i];
        i++;
        k++;
    }

    while(j<n2){
        a[k]=M[j];
        j++;
        k++;
    }

}

void mergeSort(int a[],int p, int r){
    if(p<r){
    int q=(p+r)/2;
    mergeSort(a,p,q);
    mergeSort(a,q+1,r);
    merge(a,p,q,r);
    }
}

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    mergeSort(a,0,n-1);

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
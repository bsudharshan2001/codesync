#include<bits/stdc++.h>
using namespace std;

//Time Complexity 
// Worst case - O(n^2) - If we want to sort in ASC and the array is in DESC
// Best case - O(n) - If its sorted
// Avg case - O(n^2)

// Use bubble sort
// - If Complexity doesn't  matter
// - For Simple code

int main(){
    int n,temp;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //Here in this algorithm, all the comparisons are make even if the array is already sorted -> Increases execution time
    // We can introduce a extra var -> swapped
    // for(int i=0;i<n-1;i++){
    //     for(int j=0;j<n-i-1;j++){
    //     if(a[j]>a[j+1]){
    //         temp=a[j];
    //         a[j]=a[j+1];
    //         a[j+1]=temp;}
    //     }
    // }

    //Optimized bubble sort
     for(int i=0;i<n-1;i++){
        int swapped=0;
        for(int j=0;j<n-i-1;j++){
            if(a[j]>a[j+1]){
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            
                swapped=1;
            }
        }
        if(swapped=0)
            break;
    }

    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
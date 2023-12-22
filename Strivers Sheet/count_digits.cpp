#include<bits/stdc++.h>
using namespace std;

// Solution 1 - using n/10 but time complexity  = O(n)
// int main(){
//     int n,count=0;
//     cin>>n;
//     while(n>0){
//         n=n/10;
//         count++;
//     }
//     cout<<count;
//     return 0;
// }


//Solution 2 - Convert to string and print length - time complexity = O(1)
// int main(){
//     int n;
//     cin>>n;
//     string str=to_string(n);
//     cout<<str.length();
//     return 0;
// }

//Solution 3 - use log - solution of log(number)+1 is always the number of digits - time complexity = O(1)

int main(){
    int n;
    cin>>n;
    cout<<floor(log10(n)+1);
    return 0;
}
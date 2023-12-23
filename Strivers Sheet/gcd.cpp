#include<bits/stdc++.h>
using namespace std;


// But this is the brute force approach - time complexity - O(n)
// int main(){
//     int a,b,n=1,flag;
//     cin>>a>>b;
//     // cout<<a<<b;
//     while(n<a && n<b){
//         if(a%n==0 && b%n==0)
//             flag=n;
//         // cout<<n;
//         n++;
//     }
    // Alternate for loop
    // for (int i = 1; i <= min(a, b); i++) {
	// 	if (a % i == 0 && b % i == 0) {
	// 		ans = i;
	// 	}
//     cout<<flag;
//     // cout<<"hello";
//     return 0;
// }

// Optimal Approach - Use Euclidean theorem
// gcd(a,b)=gcd(b,a%b)
// Time Complexity - O(log min(a,b))

int gcd(int a, int b){
    if(b==0)
        return a;
    else return gcd(b,a%b);
}

int main(){
    int a,b;
    cin>>a>>b;
    cout<<gcd(b,a%b);
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int mySqrt(int x){
        int i=0;
        bool flag=true;
        while(flag){
            if(i*i==x)
                return i;
            if(i*i>x)
                return i-1;
            i+=1;
        }
    }
};
//Best Runtime Solution
// class Solution {
// public:
//     int mySqrt(int x) {
//         if (x == 0)
//             return x;
//         int first = 1, last = x;
//         while (first <= last) {
//             int mid = first + (last - first) / 2;
//             // mid * mid == x gives runtime error
//             if (mid  == x / mid)
//                 return mid;
//             else if (mid > x / mid) {
//                 last = mid - 1;
//             }
//             else {
//                 first = mid + 1;
//             }
//         }
//         return last;
//     }
// };
int main(){
    Solution sol;
    int x;
    cin>>x;
    cout<<sol.mySqrt(x);
}


#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        long r = 0, temp, org=x;
        while (x != 0) {
            temp = x % 10;
            x = x / 10;
            r = r * 10 + temp;
        }
        if (r==org) 
            return true;
        else 
            return false;
            }
};

int main() {
    Solution sol;
    int number;
    cin>>number;
    cout<<sol.isPalindrome(number);
    return 0;
}
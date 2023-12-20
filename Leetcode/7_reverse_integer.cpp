#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int reverse(int x) {
        long r = 0, temp;
        while (x != 0) {
            temp = x % 10;
            x = x / 10;
            r = r * 10 + temp;
        }
        if (r > INT_MAX || r < INT_MIN) return 0;
        return int(r);
    }
};

int main() {
    Solution sol;
    int number;
    cin>>number;
    int reversedNumber = sol.reverse(number);
    cout <<reversedNumber << endl;
    return 0;
}
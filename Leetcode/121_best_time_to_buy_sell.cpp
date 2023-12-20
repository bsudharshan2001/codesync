#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    vector<int> prices = {7,1,5,3,6,4};
    int max_profit=0;
    auto f = prices.begin(), b = prices.end() - 1;
    while (f < b) {
        int profit = *b - *f;
        if (profit>max_profit) {
            max_profit=profit;
        }
        else {
            b--;
            f++;
        }
    }
    cout<<max_profit;
return 0;
}
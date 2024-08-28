//Turtle and Piggy are playing a game on a sequence. They are given a sequence a1,a2,…,an , and Turtle goes first. Turtle and Piggy alternate in turns (so, Turtle does the first turn, Piggy does the second, Turtle does the third, etc.).

//The game goes as follows:

//Let the current length of the sequence be m. If m=1, the game ends.
//If the game does not end and it's Turtle's turn, then Turtle must choose an integer i such that 1≤i≤m−1, set ai to max(ai,ai+1), and remove ai+1

//If the game does not end and it's Piggy's turn, then Piggy must choose an integer i such that 1≤i≤m−1 , set ai to min(ai,ai+1),and remove ai+1

//Turtle wants to maximize the value of a1 in the end, while Piggy wants to minimize the value of a1 in the end. Find the value of a1 in the end if both players play optimally.


#include<bits/stdc++.h>
using namespace std;

#define ll long long

int main(){
    ll t;
    cin >> t;

    while (t--) {
        ll n;
        cin >> n;
        vector<ll> a(n);
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        ll l = 0, r = n - 1;
        bool turtle = true;
        ll ans = 0;
        while (l <= r) {
            if (turtle) {
                if (a[l] > a[r]) {
                    ans = max(ans, a[l]);
                    l++;
                } else {
                    ans = max(ans, a[r]);
                    r--;
                }
            } else {
                if (a[l] > a[r]) {
                    l++;
                } else {
                    r--;
                }
            }
            turtle = !turtle;
        }
        cout << ans << endl;
    }

    return 0;

}
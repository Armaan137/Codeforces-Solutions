// https://codeforces.com/contest/2116/problem/A

#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    long long a, b, c, d;
    cin >> a >> b >> c >> d;

    // a player can win if they kill the opposing player or if they kill the opposing knight (since they cannot attack anymore).
    // the optimal strategy is to attack whichever one has the lower HP.
    // so we want to find if a player's minimum HP are greater than their opponent's.

    if (min(a, c) >= min(b, d)) {
        cout << "Gellyfish\n";
    } else {
        cout << "Flower\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t) {
        solve();
        t--;
    }

    return 0;
}

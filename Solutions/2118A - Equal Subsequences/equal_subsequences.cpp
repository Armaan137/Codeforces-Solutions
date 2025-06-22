// https://codeforces.com/problemset/problem/2118/A

#include <iostream>
using namespace std;

void solve() {
    int n, k;
    cin >> n >> k;

    // a bitstring is perfect if it has the same number of 101 and 010 subsequences.
    // the number of such subsequences can be 0.
    // if we have 0 subsequences, the bitstring is perfect already.

    for (int i = 0; i < k; i++) {
        cout << "1";
    }

    for (int i = 0; i < n - k; i++) {
        cout << "0";
    }

    cout << endl;
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

// https://codeforces.com/problemset/problem/1845/A

#include <iostream>
using namespace std;

void solve() {
    int n, k, x;
    cin >> n >> k >> x;

    if (x != 1) {
        cout << "YES\n";
        cout << n << "\n";

        for (int i = 0; i < n; i++) {
            cout << "1 ";
        }
        cout << "\n";
    } else if (k == 1 || (k == 2 && n % 2 == 1)) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
        cout << n / 2 << "\n";

        // if n is even, take 2 first, otherwise take 3.
        // since taking away an odd number from another odd results in an even number.
        // then take (n / 2 - 1) 2's from that new even number.
        if (n % 2 == 0) {
            cout << "2 ";
        } else {
            cout << "3 ";
        }

        for (int i = 0; i < n / 2 - 1; i++) {
            cout << "2 ";
        }

        cout << "\n";
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

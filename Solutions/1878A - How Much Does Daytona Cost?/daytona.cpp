// https://codeforces.com/problemset/problem/1878/A

#include <iostream>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    // we just have to check if k exists, since k can have a subsegment of length 1.
    bool ans = 0;
    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;

        if (num == k) {
            ans = 1;
        }
    }

    if (ans) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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

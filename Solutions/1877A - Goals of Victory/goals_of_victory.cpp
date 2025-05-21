// https://codeforces.com/problemset/problem/1877/A

#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    // the efficiency of the missing team must make the sum 0.
    long long ans = 0;
    for (int i = 0; i < n - 1; i++) {
        long long num;
        cin >> num;
        ans += num;
    }

    ans *= -1;

    cout << ans << "\n";
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

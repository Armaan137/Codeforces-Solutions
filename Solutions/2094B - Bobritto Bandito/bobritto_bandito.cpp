// https://codeforces.com/problemset/problem/2094/B

#include <iostream>
using namespace std;

void solve() {
    int n, m, l, r;
    cin >> n >> m >> l >> r;

    // [l...m...r]
    // [(r - m)...r...m]
    if (m <= r) {
        l = 0;
        r = m;
    } else {
        l = r - m;
    }

    cout << l << " " << r << endl;

}

int main() {
    int t;
    cin >> t;

    while (t) {
        solve();
        t--;
    }
}

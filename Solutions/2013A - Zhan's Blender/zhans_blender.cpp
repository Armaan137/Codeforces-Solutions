// https://codeforces.com/problemset/problem/2013/A

#include <iostream>
#include <algorithm>
using namespace std;

void solve() {
    long long n;
    cin >> n;

    long long x, y;
    cin >> x >> y;

    // ceil(a, b) = floor((a + b - 1) / b)

    cout <<  (min(x, y) + n - 1) / min(x, y) << endl;
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

#include <iostream>
#include <math.h>
using namespace std;

void solve() {
    long long n, m, p, q;
    cin >> n >> m >> p >> q;

    // if n cannot be divided into p equal parts, the other parts can make up for the sum; it would always be possible.
    // if there are p equal parts, the sum of those equal parts must equal m.
    if (n % p == 0 && floor(n / p) * q != m) {
        cout << "NO\n";
    } else {
        cout << "YES\n";
    }

    return;
}

int main() {
    long long t;
    cin >> t;

    while (t) {
        solve();
        t--;
    }

    return 0;
}

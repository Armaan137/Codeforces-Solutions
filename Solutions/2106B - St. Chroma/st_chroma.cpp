#include <iostream>
using namespace std;

void solve() {
    long long n, x;
    cin >> n >> x;

    for (int i = 0; i < x; i++) {
        cout << i << " ";
    }

    for (int i = x + 1; i < n; i++) {
        cout << i << " ";
    }

    if (x < n) {
        cout << x;
    }

    cout << '\n';

    return;
}

int main() {
    long long t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        solve();
    }

    return 0;
}
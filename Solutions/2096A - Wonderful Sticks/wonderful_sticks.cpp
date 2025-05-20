#include <iostream>
#include <string>
#include <vector>
using namespace std;

void solve() {
    long long n;
    string s;
    cin >> n >> s;

    vector<long long> a(n);
    long long l = 1;
    long long r = n;

    // if it's '<', insert the minimum and remove it
    // do the same for '>' except with the maximum.
    for (int i = n - 2; i >= 0; i--) {
        if (s[i] == '<') {
            a[i + 1] = l;
            l++;
        } else {
            a[i + 1] = r;
            r--;
        }
    }

    a[0] = l;

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << "\n";

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

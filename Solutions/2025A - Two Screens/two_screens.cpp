// https://codeforces.com/contest/2025/problem/A

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    string s, t;
    cin >> s >> t;

    int n = s.size(), m = t.size();

    // to minimize the number of seconds, we first check if there's a prefix we can copy to one of the screens.

    int prefix = 0;
    for (int i = 0; i < min(n, m); i++) {
        if (s[i] != t[i]) {
            break;
        }

        prefix++;
    }   

    // if there's no common prefix, the minimum seconds would just be the sum of the sizes of both strings.
    // if there is a common prefix, we can subtract it from the sum of the sizes of the two strings. we add one to account for the copy.

    if (prefix == 0) {
        cout << n + m << endl;
    } else {
        cout << n + m - prefix + 1 << endl;
    }
}

int main() {
    int q;
    cin >> q;

    while (q) {
        solve();
        q--;
    }

    return 0;
}

// https://codeforces.com/problemset/problem/1993/A

#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int a = 0, b = 0, c = 0, d = 0;
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '?') continue;

        if (s[i] == 'A' && a < n) a++;
        if (s[i] == 'B' && b < n) b++;
        if (s[i] == 'C' && c < n) c++;
        if (s[i] == 'D' && d < n) d++;
    }

    int ans = a + b + c + d;

    cout << ans << endl;
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

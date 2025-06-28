// https://codeforces.com/problemset/problem/2106/A

#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n;
    cin >> n;

    string s;
    cin >> s;
    
    int ones = 0;
    for (int i = 0; i < n; i++) {
        if (s[i] == '1') {
            ones += n - 1;
        } else {
            ones += 1;
        }
    }

    cout << ones << endl;
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

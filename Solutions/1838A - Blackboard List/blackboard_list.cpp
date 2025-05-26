// https://codeforces.com/problemset/problem/1838/A

#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int ans = 0;   
    int maximum = -1e9;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num < 0) {
            ans = num;
        }

        if (num > maximum) {
            maximum = num;
        }
    }

    // if we find a number that is negative, it has to be one of the original two numbers since abs() returns only positive values.
    // otherwise, the maximum number has to be one of the original numbers since |a - b| = b - a <= b.

    if (ans) {
        cout << ans << endl;
    } else {
        cout << maximum << endl;
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

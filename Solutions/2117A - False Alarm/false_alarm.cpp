// https://codeforces.com/problemset/problem/2117/A

#include <iostream>
using namespace std;

void solve() {
    int n, x;
    cin >> n >> x;

    // we need to use the button on the first closed door we encounter.
    // we then need to check if there are no more closed doors after moving x doors.
    // so we need to find the last closed door too.
    // then we can just check if x is greater than or equal to the length between the first and last closed door.

    int first = 1e5;
    int last = -1;

    for (int i = 0; i < n; i++) {
        int a;
        cin >> a;
        
        if (a == 1) {
            first = min(first, i);
            last = max(last, i);
        }
    }

    if (x >= last - first + 1) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
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

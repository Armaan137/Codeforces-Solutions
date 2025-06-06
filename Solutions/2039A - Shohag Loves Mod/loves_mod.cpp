// https://codeforces.com/problemset/problem/2039/A

#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    // the first element mod 1 will always be 0.
    // the second element mod 2 can be 0 or 1. But since the first element has mod of 0, it must be 1.
    // the third element mod 3 can be 0, 1, or 2. So we have to go with mod of 2.
    // we can see that the mod value must be i - 1.
    // since we want an increasing sequnce, we need a_i >= i.
    // since n can be up to 50, and the elements up to 100, this suggests that the elements must be values up to 2n.

    for (int i = 1; i <= n; i++) {
        cout << 2 * i - 1 << " ";
    }

    cout << endl;

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

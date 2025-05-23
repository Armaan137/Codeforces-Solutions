// https://codeforces.com/problemset/problem/1857/A

#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int num_odd = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num % 2 != 0)
            num_odd++;
    }

    // adding an odd number changes parity, while adding an even number keeps the parity the same.
    if (num_odd % 2 == 0)
        cout << "YES\n";
    else
        cout << "NO\n";

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

// https://codeforces.com/problemset/problem/1858/A

#include <iostream>
using namespace std;

void solve() {
    long long a, b, c;
    cin >> a >> b >> c;

    // whoever has the strictly largest amount of clickable buttons wins
    if (c % 2 == 0) {
        if (a > b)
            cout << "First\n";
        else
            cout << "Second\n";
    } else {
        if (b > a)
            cout << "Second\n";
        else
            cout << "First\n";
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

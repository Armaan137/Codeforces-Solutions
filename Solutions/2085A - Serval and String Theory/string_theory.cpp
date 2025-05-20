// https://codeforces.com/problemset/problem/2085/A

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void solve() {
    long long n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    // if k = 0, we need to check if it's smaller than it's reverse.
    // if k >= 1, we need to check if there is differing characters; we can always make a swap.
    string rev = string(s.rbegin(), s.rend());
    if (s < rev || k > 0 && min_element(s.begin(), s.end()) != max_element(s.begin(), s.end())) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int t;
    cin >> t;

    while (t) {
        solve();
        t--;
    }
}
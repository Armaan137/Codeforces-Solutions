// https://codeforces.com/problemset/problem/2084/A

#include <iostream>
using namespace std;

void solve() {
    int n; 
    cin >> n;

    // there is no solution for when n is even.
    if (n % 2 == 0) {
        cout << -1 << endl;
        return;
    }

    // can see that the mod of 2 consecutive numbers is the smallest of the 2, so then (i - 1) mod i = i - 1.
    // since we start at i = 2, we need to make x mod 2 = i - 1 = 1. this is only attainable when x is odd.
    // we can move n (which is guaranteed to be odd) to the front; p = [n, 1, 2, ..., n - 2, n - 1].
    // this makes the rest of the numbers consecutive.
    
    cout << n << " ";

    for (int i = 1; i < n; i++) {
        cout << i << " ";
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

// https://codeforces.com/problemset/problem/2117/B

#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    // notice that a permutation always stops shrinking as soon as it has 2 elements; 1 and 2.
    // any permutation with 1 and 2 on it's ends will be maximized.

    cout << 1 << " ";

    for (int i = 3; i <= n; i++) {
        cout << i << " ";
    }

    cout << 2 << endl;
    
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

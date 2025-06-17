// https://codeforces.com/problemset/problem/2043/A

#include <iostream>
using namespace std;

void solve() {
    long long n;
    cin >> n;
    
    int ans = 1;
    while (n > 3) {
        n /= 4;
        ans *= 2;
    }

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

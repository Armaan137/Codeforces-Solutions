// https://codeforces.com/problemset/problem/1866/A

#include <iostream>
#include <cmath>
#include <climits>
using namespace std;

int main() {
    long long n;
    cin >> n;

    long long ans = INT_MAX;
    long long prod = 1;

    // the minimum value of operations would be the minimum of all abs elements, since we want to change that to 0.
    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;

        prod *= num;
        ans = min(ans, abs(num));
    }

    cout << ans << "\n";
}
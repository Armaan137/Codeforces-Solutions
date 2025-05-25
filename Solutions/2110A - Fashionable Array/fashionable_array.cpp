// https://codeforces.com/problemset/problem/2110/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        arr.push_back(num);
    }

    sort(arr.begin(), arr.end());

    // the difference or sum between 2 odd numbers is an even.
    // odd + odd = even
    // even + even = even
    // odd + even = odd
    // even + odd = odd
    // so we need to check the minimum distance from l and r, whichever encounters a number of different parity.

    if ((arr[0] + arr[n - 1]) % 2 == 0) {
        cout << 0 << endl;
        return;
    }

    int l = 0, r = 0;
    for (int i = 1; i < n; i++) {
        if (arr[0] % 2 != arr[i] % 2) {
            l = i;
            break;
        }
    }

    for (int i = n - 2; i >= 0; i--) {
        if (arr[n - 1] % 2 != arr[i] % 2) {
            r = (n - 1) - i;
            break;
        }
    }

    cout << min(l, r) << endl;
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

// https://codeforces.com/problemset/problem/2061/A

#include <iostream>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int num_odd = 0;
    int num_even = 0;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        if (num % 2 == 0) {
            num_even++;
        } else {
            num_odd++;
        }
    }

    // we're given n integers.
    // we want to return the number of points when the integers are arranged in such a way that maximises it.

    // an even sum occurs when we have: even + even or odd + odd.
    // to maximise we might want the first element to be even, then all other subsequent elements to be odd.
    // since we encounter the even num first, we get the sum to be odd after the division loop,
    // then adding those subsequent elements causes the sum to be even, since an odd + odd = even.

    // here are some examples
    // 1, 2, 3 -> 2, 1, 3
    // 1, 2 -> 2, 1
    // 3, 1, 4, 1, 5, 9, 2, 6, 5, 3 -> 6, 4, 2, 9, 5, 5, 3, 3, 1, 1

    // n - 1 points when there are only odds and no evens.
    // 1 point when there are only evens and no odds.
    // if there are odds and at least one even, all the evens combine as 1 point while each odd is 1 point.

    if (num_even) {
        cout << num_odd + 1 << endl;
    } else {
        cout << num_odd - 1 << endl;
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

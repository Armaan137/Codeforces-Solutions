// https://codeforces.com/problemset/problem/1853/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<long long> a;
    for (int i = 0; i < n; i++) {
        long long num;
        cin >> num;

        a.push_back(num);
    }

    // to find the minimum operations, we first need to find the minimum difference between 2 adjacent elements.
    bool is_sorted = true;
    long long min_difference = 1e9;
    for (int i = 1; i < n; i++) {
        if (a[i] < a[i - 1]) {
            is_sorted = false;
        }

        min_difference = min(min_difference, a[i] - a[i - 1]);
    }

    if (!is_sorted) {
        cout << "0\n";
        return;
    }

    // the number of operations is then floor(minimum diff / 2) + 1.
    cout << (min_difference / 2 ) + 1 << "\n";

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

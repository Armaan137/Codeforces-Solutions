// https://codeforces.com/problemset/problem/1859/A

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

    sort(a.begin(), a.end());

    // if an array is of the same number for all elements, then they are all divisible.
    if (a[0] == a.back()) {
        cout << "-1\n";
        return;
    }

    // we can generate a solution by placing the smallest number into b and all other elements into c.
    // if some element c is larger than b, then c cannot divide b and is therefore not a divisor.
    int l = 0;
    while (a[0] == a[l]) {
        l++;
    }

    cout << l << " " << n - l << "\n";

    for (int i = 0; i < l; i++) {
        cout << a[i] << " ";
    }

    cout << "\n";

    for (int i = l; i < n; i++) {
        cout << a[i] << " ";
    }

    cout << "\n";
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

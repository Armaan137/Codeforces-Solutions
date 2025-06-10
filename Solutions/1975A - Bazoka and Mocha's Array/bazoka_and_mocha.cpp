// https://codeforces.com/problemset/problem/1975/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> a;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    // only possible when we have 2 sections of increasing numbers, and combining those 2 sections is also sorted.
    // if the array is already sorted it is also possible.
    // if section #2 + section #1 is sorted, then yes. otherwise no.
    // section #1 = {0, ..., i}
    // section #2 = {i+1, ..., n-1}
    // a := {idx+1, ..., n-1, 0, ..., i}

    int idx = -1;
    for (int i = 0; i < n - 1; i++) {
         if (a[i] > a[i + 1]) {
            idx = i;
            break;
         }

    }

    if (idx == -1) {
        cout << "Yes" << endl;
        return;
    }

    vector<int> combined;

    for (int i = idx + 1; i < n; i++) {
        combined.push_back(a[i]);
    }

    for (int i = 0; i <= idx; i++) {
        combined.push_back(a[i]);
    }

    for (int i = 0; i < n - 1; i++) {
        if (combined[i] > combined[i + 1]) {
            cout << "No" << endl;
            return;
        }
    }

    cout << "Yes" << endl;

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

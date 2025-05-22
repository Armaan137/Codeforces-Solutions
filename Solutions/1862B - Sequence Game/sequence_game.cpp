// https://codeforces.com/problemset/problem/1862/B

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> arr;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        // b consists of those elements in a such that a[i] >= a[i - 1]
        // so if we have a pair of adjacent numbers in b such that b[i] < b{i + 1], we need to divide them with 1,
        // since it's the smallest.
        if (i >= 1 && arr.back() > num) {
            arr.push_back(1);
        }

        arr.push_back(num);
    }

    cout << arr.size() << "\n";

    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
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


// https://codeforces.com/problemset/problem/2001/A

#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<int> freq(n + 1);

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        freq[num]++;
    }

    int mode = *max_element(freq.begin(), freq.end());

    cout << n - mode << endl;

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

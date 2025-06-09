// https://codeforces.com/problemset/problem/2030/A

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void solve() {
    int n;
    cin >> n;

    // we need to arrange a in such a way that maximizes the score.
    // optimally, b should be {max, min, min, ...} and c should be {max, max, max, ...}.
    // this is so the first elements cancel each other out.
    
    vector<int> a;

    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;
        a.push_back(num);
    }

    int curr_min = *min_element(a.begin(), a.end());
    int curr_max = *max_element(a.begin(), a.end());

    int ans = (curr_max - curr_min) * (n - 1);

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

// https://codeforces.com/problemset/problem/1863/A

#include <iostream>
#include <string>
using namespace std;

void solve() {
    int n, a, q;
    cin >> n >> a >> q;

    string s;
    cin >> s;

    int online = 0;
    for (int i = 0; i < q; i++) {
        if (s[i] == '+') online++;
    }

    // if the number of people online at the start + the number of people going online is less than n, then the answer is no.
    // if the current number of people online ever reaches n, then the answer is yes. otherwise, it is maybe.

    if (a + online < n) {
        cout << "NO" << endl;
        return;
    } else if (a == n) {
        cout << "YES" << endl;
        return;
    } else {
        for (int i = 0; i < q; i++) {
            if (s[i] == '+') {
                a++;
            } else {
                a--;
            }

            if (a == n) {
                cout << "YES" << endl;
                return;
            }
        }

    }

    cout << "MAYBE" << endl;
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

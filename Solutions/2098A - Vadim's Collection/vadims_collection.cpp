// https://codeforces.com/problemset/problem/2098/A

#include <iostream>
#include <string>
#include <vector>
#include <set>
using namespace std;

void solve() {
    string s;
    cin >> s;

    // find the smallest possible beautiful string.
    // a string is beautiful if: it's a string of 10 digits, the ith digit from the left is at least 10 - i (1 indexed).
    // that is, the first digit must be at least 9, the second must be at least 8,...

    // we can do this by iterating over the positions and finding the smallest valid character for the position.
    // once we use up a number at a position, we cannot use it again.

    set<int> seen;
    for (int i = 0; i < 10; i++) {
        int best = 9;
        int pos = -1;

        for (int j = 0; j < 10; j++) {
            if (seen.count(j)) continue;
            
            int digit = s[j] - '0';
            if (digit >= 9 - i && digit < best) {
                best = digit;
                pos = j;
            }
        }
        cout << best;
        seen.insert(pos);
    }

    cout << endl;

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

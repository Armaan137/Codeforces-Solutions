// https://codeforces.com/contest/2109/problem/A

#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;

    int s = 0;
    vector<int> scores;
    for (int i = 0; i < n; i++) {
        int num;
        cin >> num;

        s += num;
        scores.push_back(num);
    }

    bool check_wins = 0;
    for (int i = 0; i < n - 1; i++) {
        if (scores[i] == 0 && scores[i + 1] == 0) {
            check_wins = 1;
            break;
        }
    }

    // if there are 2 consecutive 0's, that means one of them is lying since a winner must result from a duel.
    // there must also be a 0; meaning that at minimum, one player must lose. so if everyone has won a game, then someone is lying.
    if (s == n || check_wins) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
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

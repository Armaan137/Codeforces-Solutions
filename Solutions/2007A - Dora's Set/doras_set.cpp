// https://codeforces.com/problemset/problem/2007/A

#include <iostream>
using namespace std;

void solve() {
    int l, r;
    cin >> l >> r;

    // the gcd between consecutive integers is always 1.
    // the gcd between consecutive odd integers is also always 1. this doesn't hold for consecutive even integers.
    // since we want gcd(a, b) = gcd(b, c) = gcd(a, c) = 1, we must have only 1 even integer since a pair of them has gcd of at least 2. 
    // this leaves the other 2 integers being odd.
    
    // we can choose consecutive integers in the form (2k - 1, 2k, 2k + 1). 
    // we can then calculate the answer by finding the number of odd integers and dividing by 2, since each pair (a, b, c) has 2 odd integers.
    int ans = ((r + 1) / 2 - l / 2) / 2;

    cout << ans << endl;
}

int main() {
    int t;
    cin >> t;

    while (t) {
        solve();
        t--;
    }
}

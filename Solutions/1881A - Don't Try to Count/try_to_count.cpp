//
// Created by Armaan Khabra on 2025-05-18.
//
#include <iostream>
#include <string>
using namespace std;

int main() {
    long long t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        long long n, m;
        cin >> n >> m;

        string x, s;
        cin >> x >> s;

        bool found = false;
        for (int k = 0; k <= 5; k++) {
            if (x.find(s) != string::npos) {
                cout << k << "\n";
                found = true;
                break;
            }
            x += x;
        }

        if (!found) {
            cout << "-1" << "\n";
        }

    }

    return 0;
}
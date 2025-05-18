//
// Created by Armaan Khabra on 2025-05-17.
//
#include <iostream>
#include <math.h>
using namespace std;

int main() {
    long long n, k;
    cin >> n >> k;

    // calculate the number of odd numbers through n.
    // if k falls between 0 and that number, that means that the position is in the odd sequence.
    long long num_odd = floor((n + 1) / 2);
    long long result = 0;

    if (k >= 1 && k <= num_odd) {
        result = 1 + (k - 1) * 2;
    } else {
        // since the even sequence occurs after the odd one, we have to shift the position.
        result = 2 + ((k - num_odd) - 1) * 2;
    }

    cout << result << "\n";

    return 0;
}

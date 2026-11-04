#include <bits/stdc++.h>
using namespace std;

int main() {
    int k, r;
    cin >> k >> r;

    for (int i = 1; i <= 10; i++) {
        int rem = (k * i) % 10;
        if (rem == 0 || rem == r) {
            cout << i << endl;
            break;
        }
    }
    // Find the smallest count i of k-priced shovels whose total ends in 0 or r (so no change is needed), using i from 1 to 10.

    return 0;
}
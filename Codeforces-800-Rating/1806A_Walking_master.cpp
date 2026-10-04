#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        long long k = d - b;
        if (k < 0 || a + k < c) {
            cout << -1 << endl;
        } else {
            cout << k + (a + k - c) << endl;
        }
    }
    return 0;
}
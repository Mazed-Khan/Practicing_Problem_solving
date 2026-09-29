#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b;
        cin >> n >> a >> b;
        // Yes if the whole array matches, or at least 2 positions remain in the middle
        if ((a == n && b == n) || a + b <= n - 2)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        string ans;
        for (int i = 0; i < 8; i++) {
            string row;
            cin >> row;
            for (char c : row) {
                if (c != '.') ans += c;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
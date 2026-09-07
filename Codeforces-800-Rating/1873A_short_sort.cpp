#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        bool bad = false;
        for (int i = 0; i < 2; i++) {
            if (s[i] == 'c' && s[i + 1] == 'a') {
                bad = true;
                break;
            }
        }
        cout << (bad ? "NO" : "YES") << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    string t, s;
    cin >> t >> s;

    int n = t.length();
    bool check = (s.length() == t.length());

    if (check) {
        for (int i = 0; i < n; i++) {
            if (s[i] != t[n - 1 - i]) {
                check = false;
                break;
            }
        }
    }

    cout << (check ? "YES" : "NO") << endl;
    return 0;
}
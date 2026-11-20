#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    for (int i = 0; i < t; i++) {
        string s;
        cin >> s;
        int a = 0;
        for (int j = 0; j < 5; j++) {
            if (s[j] == 'A') a++;
        }
        if (a >= 3) cout << "A" << endl;
        else cout << "B" << endl;
    }
    return 0;
}
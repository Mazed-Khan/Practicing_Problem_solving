#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int x = 0, y = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            if (i % 2 != a % 2) {
                if (i % 2 == 0) x++;
                else y++;
            }
        }
        cout << (x == y ? x : -1) << "\n";
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }

        sort(a.begin(), a.end());

        int answer = -1;

        for (int i = 0; i < n - 2; i++) {
            if (a[i] == a[i + 1] && a[i] == a[i + 2]) {
                answer = a[i];
                break;
            }
        }

        cout << answer << endl;
    }

    return 0;
}
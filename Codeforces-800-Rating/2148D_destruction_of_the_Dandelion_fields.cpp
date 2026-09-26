#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> odds;
        long long sum = 0;

        for (int i = 0; i < n; i++) {
            int x;
            cin >> x;

            sum += x;

            if (x % 2 == 1) {
                odds.push_back(x);
            }
        }

        int m = odds.size();

        // If there are no odd numbers, answer is 0
        if (m == 0) {
            cout << 0 << endl;
            continue;
        }

        sort(odds.begin(), odds.end());

        int take = m / 2;
        long long to_subtract = 0;

        for (int i = 0; i < take; i++) {
            to_subtract += odds[i];
        }

        cout << sum - to_subtract << endl;
    }

    return 0;
}
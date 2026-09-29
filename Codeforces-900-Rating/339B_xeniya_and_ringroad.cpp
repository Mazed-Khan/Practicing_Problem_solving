#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n, m;
    cin >> n >> m;

    vector<int> a(m);
    for (int i = 0; i < m; i++) {
        cin >> a[i];
    }

    long long count = 0;

    for (int i = 0; i < m; i++) {
        if (i == 0) {
            count += a[i] - 1;
        } else {
            if (a[i] >= a[i - 1]) {
                count += a[i] - a[i - 1];
            } else {
                count += (n - a[i - 1]) + a[i];
            }
        }
    }

    cout << count << endl;
    return 0;
}
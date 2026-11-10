#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    int mx = 0;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        mx = max(mx, a[i]);
    }

    int total = 0;
    for (int i = 0; i < n; i++) {
        total += mx - a[i];
    }

    cout << total << endl;
    return 0;
}
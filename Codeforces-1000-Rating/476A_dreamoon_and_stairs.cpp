#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    int lo = (n + 1) / 2;
    int ans = ((lo + m - 1) / m) * m;

    if (ans > n) cout << -1 << endl;
    else cout << ans << endl;

    return 0;
}
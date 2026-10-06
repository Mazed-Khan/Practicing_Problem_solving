#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        ll a, b, x;
        cin >> a >> b >> x;
 
        ll ans = LLONG_MAX;
        for (ll i = 0; ; i++) {
            if (a < b) swap(a, b);
            ans = min(ans, a - b + i);
            if (a == b) break;
            a /= x;
        }
 
        cout << ans << endl;
    }
}
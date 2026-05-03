#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T; 
    if(!(cin >> T)) return 0;
    while (T--) {
        long long r1, r2, B;
        cin >> r1 >> r2 >> B;

        long long ballsBowled = 300 - B;
        double crr = (ballsBowled > 0) ? (r2 * 6.0) / ballsBowled : 0.0;

        long long need = (r1 + 1 - r2);
        if (need < 0) need = 0;

        double rrr = (B > 0) ? (need * 6.0) / B : 0.0;

        cout << fixed << setprecision(2) << crr << " " << rrr << "\n";
    }
    return 0;
}

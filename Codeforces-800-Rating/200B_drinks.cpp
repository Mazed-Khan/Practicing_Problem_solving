#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    double total = 0;

    for (int i = 0; i < n; i++) {
        double p;
        cin >> p;
        total += p;
    }

    cout << fixed << setprecision(12) << total / n << endl;

    return 0;
}
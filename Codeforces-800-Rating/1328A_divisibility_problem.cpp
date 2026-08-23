#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long a, b;
        cin >> a >> b;
        long long mod = a % b;
        cout << (mod == 0 ? 0 : b - mod) << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int fAge, sAge;
    cin >> fAge >> sAge;

    int ans = abs(fAge - 2 * sAge);
    cout << ans << endl;

    return 0;
}

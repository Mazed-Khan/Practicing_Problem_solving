#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<long long> vec(n);

    for (int i = 0; i < n; i++)
        cin >> vec[i];

    int count = 1;
    int ans = 1;

    for (int i = 1; i < n; i++) {
        if (vec[i] >= vec[i - 1]) {
            count++;
        } else {
            count = 1;
        }

        ans = max(ans, count);
    }

    cout << ans << endl;

    return 0;
}
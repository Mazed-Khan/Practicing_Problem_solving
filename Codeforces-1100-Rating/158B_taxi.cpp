#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x : a) cin >> x;
    sort(a.begin(), a.end());

    int left = 0, right = n - 1, ans = 0;
    while (left <= right) {
        ans++;

        int cap = 4 - a[right];
        right--;

        while (left <= right && a[left] <= cap) {
            cap -= a[left];
            left++;
        }
    }
    cout << ans << endl;
    return 0;
}
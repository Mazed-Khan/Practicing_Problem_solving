#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        int total = n * k;
        vector<long long> a(total);
        for (int i = 0; i < total; i++)
        {
            cin >> a[i];
        }
        int step = n / 2 + 1;
        long long ans = 0;
        int idx = total - step;
        for (int i = 0; i < k; i++)
        {
            ans += a[idx];
            idx -= step;
        }
        cout << ans << endl;
    }
    return 0;
}
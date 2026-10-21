#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }

        long long ans = 0;
        bool possible = true;

        for (int i = n - 2; i >= 0; i--)
        {
            if (a[i + 1] == 0)
            {
                possible = false;
                break;
            }
            while (a[i] >= a[i + 1])
            {
                a[i] /= 2;
                ans++;
            }
        }

        if (possible)
        {
            cout << ans << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
    return 0;
}

// Find the minimum number of "divide by 2 (floor)" operations to make the array strictly increasing, or print -1 if impossible.
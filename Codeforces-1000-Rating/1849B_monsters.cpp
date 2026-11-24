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

        vector<pair<int, int>> v;

        for (int i = 1; i <= n; i++)
        {
            int h;
            cin >> h;

            int r = h % k;
            if (r == 0)
            {
                r = k;
            }

            v.push_back({-r, i});
        }

        sort(v.begin(), v.end());

        for (int i = 0; i < n; i++)
        {
            cout << v[i].second << " ";
        }
        cout << endl;
    }

    return 0;
}
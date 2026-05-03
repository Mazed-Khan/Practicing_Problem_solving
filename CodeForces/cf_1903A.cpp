#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, k;
        cin >> n >> k;
        vector<long long> ar(n);
        for (int i = 0; i < n; i++)
        {
            cin >> ar[i];
        }

        vector<long long> copy_arr = ar;
        sort(copy_arr.begin(), copy_arr.end());

        if (copy_arr == ar || k > 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}
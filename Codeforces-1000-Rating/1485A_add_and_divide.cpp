#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b;
        cin >> a >> b;

        long long ans = INT_MAX;

        for (int i = 0; i < 32; i++)
        {
            long long operations = i;
            long long new_b = b + i;
            if (new_b == 1)
            {
                continue;
            }
            long long copy_a = a;
            while (copy_a > 0)
            {
                copy_a /= new_b;
                operations++;
            }
            ans = min(ans, operations);
        }
        cout << ans << endl;
    }

    return 0;
}
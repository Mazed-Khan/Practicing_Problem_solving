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
        int ones = 0, twos = 0, sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (x == 1)
            {
                ones++;
            }
            else
            {
                twos++;
            }
        }
        if (sum % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else if (ones == 0 && twos % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}
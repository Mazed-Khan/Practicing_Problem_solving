#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string s;
        cin >> s;

        // Delete leftmost 0
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '0')
            {
                s.erase(i, 1);
                break;
            }
        }

        // Delete leftmost 1
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
            {
                s.erase(i, 1);
                break;
            }
        }

        cout << s << endl;
    }

    return 0;
}
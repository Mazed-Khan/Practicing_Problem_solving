#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n;
    cin >> n;

    int count = 0;

    for (int i = 0; i < n.size(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            count++;
        }
    }

    string s = to_string(count);
    bool isLucky = true;

    if (count == 0)
    {
        isLucky = false;
    }

    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] != '4' && s[i] != '7')
        {
            isLucky = false;
        }
    }

    if (isLucky)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
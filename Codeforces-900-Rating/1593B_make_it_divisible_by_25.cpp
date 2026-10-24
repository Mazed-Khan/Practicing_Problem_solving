#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        string n;
        cin >> n;

        vector<string> possible_values = {"00", "25", "50", "75"};
        int ans = INT_MAX;

        for (auto possible_value : possible_values)
        {
            int operations = 0;
            int checker_index = possible_value.size() - 1;

            for (int i = n.size() - 1; i >= 0; i--)
            {
                if (n[i] == possible_value[checker_index])
                {
                    checker_index--;
                    if (checker_index < 0)
                    {
                        break;
                    }
                }
                else
                {
                    operations++;
                }
            }

            if (checker_index >= 0)
            {
                operations = INT_MAX;
            }

            ans = min(ans, operations);
        }

        cout << ans << endl;
    }

    return 0;
}

// Problem: Find the minimum number of digits to delete from n so that it becomes divisible by 25 (ends with 00/25/50/75).
// Answer: For each ending, scan n from the right, count the digits skipped until the ending is matched, and take the minimum over all four endings.
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int N;
    cin >> N;
    cin.ignore();

    
    while (N--)
    {
        string line;
        getline(cin, line);

        for (char &c : line)
        {
            if (isalpha(c))
            {
                c += 3;
            }
        }
        reverse(line.begin(), line.end());

        int mid = line.length() / 2;
        for (int i = mid; i < line.length(); i++)
        {
            line[i] = line[i] - 1;
        }
    cout << line << endl;

    }

    return 0;
}
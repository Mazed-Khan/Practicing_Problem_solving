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
		vector<int> p(n);
		for (int i = 0; i < n; i++)
		{
			cin >> p[i];
		}

		bool found = false;
		for (int j = 1; j < n - 1; j++)
		{
			if (p[j - 1] < p[j] && p[j] > p[j + 1])
			{
				cout << "YES" << endl;
				cout << j << " " << j + 1 << " " << j + 2 << endl;
				found = true;
				break;
			}
		}

		if (!found)
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long t;
	cin >> t;
	while (t--)
	{
		long long a, b, c;
		cin >> a >> b >> c;

		bool answer = false;

		long long target_a = 2 * b - c;
		if (target_a / a > 0 && target_a % a == 0)
			answer = true;

		long long target_b = (a + c) / 2;
		if (target_b / b > 0 && target_b % b == 0 && (c - a) % 2 == 0)
			answer = true;

		long long target_c = 2 * b - a;
		if (target_c / c > 0 && target_c % c == 0)
			answer = true;

		if (answer)
			cout << "YES" << endl;
		else
			cout << "NO" << endl;
	}
	return 0;
}

// Point 1: AP condition is 2b = a + c. Fixing two numbers gives the value the third one must become:
//          a = 2b - c, b = (a + c) / 2, c = 2b - a.
// Point 2: For each number x, target_x must be positive and divisible by x,
//          so that m = target_x / x is a positive integer.
// Point 3: For b, (a + c) must be even (checked by (c - a) % 2 == 0), otherwise the average is not an integer.
//          Time complexity: O(1) per test case, Space complexity: O(1).
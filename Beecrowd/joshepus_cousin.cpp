#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2 || n == 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0) return false;
    return true;
}

int main() {
    int primes[3500];
    int count = 0, num = 2;
    while (count < 3500) {
        if (isPrime(num)) primes[count++] = num;
        num++;
    }

    int n;
    while (cin >> n && n != 0) {
        vector<int> soldiers;
        for (int i = 1; i <= n; i++)
            soldiers.push_back(i);

        int cur = 0;

        for (int i = 0; i < n - 1; i++) {
            int step = primes[i];
            cur = (cur + step - 1) % (int)soldiers.size();
            soldiers.erase(soldiers.begin() + cur);
            cur = cur % (int)soldiers.size();
        }

        cout << soldiers[0] << endl;
    }

    return 0;
}
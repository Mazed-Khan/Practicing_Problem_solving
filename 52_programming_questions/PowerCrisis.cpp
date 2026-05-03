#include <bits/stdc++.h>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    
    for (int i = 5; i <= sqrt(n); i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    while (cin >> n && n != 0) {
        if(isPrime(n)){
        for (int m = 1; ; m++) {
            vector<int> city;
            for (int i = 1; i <= n; i++) {
                city.push_back(i);
            }

            city.erase(city.begin()); 
            int index = 0;

            while (city.size() > 1) {
                index = (index + m - 1) % city.size();
                city.erase(city.begin() + index);
            }

            if (city[0] == 13) {
                cout << m << endl;
                break;
            }
        }
        }
    }
    return 0;
}
#include <iostream>
#include <iomanip>
using namespace std;

long long factorialIterative(int n) {
    long long result = 1;
    for (int i = 2; i <= n; ++i) {
        result *= i;
    }
    return result;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;

        double sum = 0.0;
        for (int i = 1; i <= n; i++) {
            sum += (double)i / factorialIterative(i);
        }

        cout << fixed << setprecision(4) << sum << endl; // 4 decimal
    }
    return 0;
}

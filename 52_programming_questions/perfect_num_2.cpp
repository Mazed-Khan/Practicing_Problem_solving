#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        long long N;
        cin >> N;

        for (long long num = 1; num <= N; num++) {
            long long sum = 0;

            // Sum of proper divisors
            for (long long k = 1; k <= num / 2; k++) {
                if (num % k == 0) {
                    sum += k;
                }
            }

            if (sum == num) {
                cout << num << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

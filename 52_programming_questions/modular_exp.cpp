#include <iostream>
using namespace std;

long long power(long long p, long long q, long long c) {
    long long result = 1;
    p %= c;

    while (q > 0) {
        if (q % 2 == 1) {
            result = (result * p) % c;
        }
        p = (p * p) % c;
        q /= 2;
    }
    return result;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int T;
    cin >> T;
    while (T--) {
        long long p, q, c;
        cin >> p >> q >> c;
        long long final_result = power(p, q, c);
        cout << "Result = " << final_result << endl;
    }
    return 0;
}

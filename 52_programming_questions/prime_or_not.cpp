#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(long long n) {
    if(n <= 1) return false;
    if(n == 2 || n == 3) return true;
    if(n % 2 == 0) return false;

    long long sq = sqrt(n);
    for(long long i = 3; i <= sq; i += 2) {
        if(n % i == 0) return false;
    }
    return true;
}

int main() {
    int T;
    cin >> T;
    while(T--) {
        long long N;
        cin >> N;

        if(isPrime(N))
            cout << N << " is a prime" << endl;
        else
            cout << N << " is not a prime" << endl;
    }
    return 0;
}

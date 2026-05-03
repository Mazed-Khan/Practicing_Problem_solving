#include <iostream>
#include <numeric>
using namespace std;

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        long long a, b;
        cin >> a >> b;
        long long gcf = gcd(a,b);
        long long lcm = a * b / gcf;
        cout << "LCM = " << lcm << endl;
    }
    return 0;
}
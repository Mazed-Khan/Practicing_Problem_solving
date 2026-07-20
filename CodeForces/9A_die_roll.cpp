#include <bits/stdc++.h>
using namespace std;

int main() {
    int y, w;
    cin >> y >> w;

    int mx = max(y, w);
    int numerator = 7 - mx;
    int denominator = 6;

    int g = __gcd(numerator, denominator);
    numerator /= g;
    denominator /= g;

    cout << numerator << "/" << denominator << endl;

    return 0;
}
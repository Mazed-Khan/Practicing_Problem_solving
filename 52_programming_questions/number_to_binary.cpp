#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (n == 0) {
        cout << "Binary: 0";
        return 0;
    }

    string binary = "";

    while (n > 0) {
        binary = char('0' + (n % 2)) + binary;
        n /= 2;
    }

    cout << "Binary: " << binary;

    return 0;
}

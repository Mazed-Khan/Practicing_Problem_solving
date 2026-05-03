#include <iostream>
using namespace std;

int main() {
    string binary;
    cout << "Enter a binary number: ";
    cin >> binary;

    int decimal = 0;

    for (char bit : binary) {
        decimal = decimal * 2 + (bit - '0');
    }

    cout << "Decimal: " << decimal;

    return 0;
}

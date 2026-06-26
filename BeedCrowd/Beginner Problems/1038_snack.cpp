#include <bits/stdc++.h>
using namespace std;

int main() {
    int code, quantity;
    double price = 0.0, total;

    cin >> code >> quantity;

    switch(code) {
        case 1:
            price = 4.00;
            break;
        case 2:
            price = 4.50;
            break;
        case 3:
            price = 5.00;
            break;
        case 4:
            price = 2.00;
            break;
        case 5:
            price = 1.50;
            break;
    }

    total = price * quantity;

    cout << "Total: R$ " << fixed << setprecision(2) << total << endl;

    return 0;
}
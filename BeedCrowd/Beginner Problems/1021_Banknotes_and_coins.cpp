#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    double N;
    cin >> N;

    // Convert to cents to avoid floating-point errors
    int amount = (int)(N * 100 + 0.5);

    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    int coins[] = {100, 50, 25, 10, 5, 1};

    cout << "NOTAS:" << endl;

    for (int i = 0; i < 6; i++) {
        cout << amount / notes[i]
             << " nota(s) de R$ "
             << fixed << setprecision(2)
             << notes[i] / 100.0 << endl;
        amount %= notes[i];
    }

    cout << "MOEDAS:" << endl;

    for (int i = 0; i < 6; i++) {
        cout << amount / coins[i]
             << " moeda(s) de R$ "
             << fixed << setprecision(2)
             << coins[i] / 100.0 << endl;
        amount %= coins[i];
    }

    return 0;
}
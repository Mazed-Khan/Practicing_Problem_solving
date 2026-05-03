#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        float X;
        cin >> X;
        int days = 0;
        while (X > 1) {
            X = X / 2;
            days++;
        }
        cout << days << " days" << endl;
    }
    return 0;
}

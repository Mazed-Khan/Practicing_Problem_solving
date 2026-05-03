#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        double Xc, Yc, r, X, Y;
        cin >> Xc >> Yc >> r;
        cin >> X >> Y;

        double distance = sqrt(pow(X - Xc, 2) + pow(Y - Yc, 2));

        if (distance < r) {
            cout << "The point is inside the circle" << endl;
        } else {
            cout << "The point is not inside the circle" << endl;
        }
    }
    return 0;
}
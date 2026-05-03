#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b, c;
        cin >> a >> b >> c;

        if (a + b > c && a + c > b && b + c > a) {
            double s = (a + b + c) / 2.0;
            double area = sqrt(s * (s - a) * (s - b) * (s - c));

            cout << "Area = " << fixed << setprecision(3) << area << endl;
        }
    }
    return 0;
}
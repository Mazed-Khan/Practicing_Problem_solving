#include <iostream>
#include <cmath> // for pow()

using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int n;
        cin >> n;
        int original = n;
        int sum = 0;
        int count = 0;

        int temp = n;
        while (temp > 0) {
            count++;
            temp /= 10;
        }

        temp = n;
        while (temp > 0) {
            int digit = temp % 10;
            sum += pow(digit, count);
            temp /= 10;
        }

        if (sum == original) {
            cout << original << " is an armstrong number!" << endl;
        } else {
            cout << original << " is not an armstrong number!" << endl;
        }
    }
    return 0;
}

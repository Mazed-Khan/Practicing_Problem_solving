#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int a, b;
        cin >> a >> b;
        int count = 0;

        for (int j = a; j <= b; j++) {
            if (j < 2) continue;
            bool prime = true;
            for (int k = 2; k * k <= j; k++) {
                if (j % k == 0) {
                    prime = false;
                    break;
                }
            }
            if (prime) count++;
        }
        cout << count << endl;
    }

    return 0;
}

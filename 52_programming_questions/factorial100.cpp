#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        int count = 0;
        for (int d = 5; d <= N; d *= 5) {
            count += N / d;
        }
        cout << count << "\n";
    }
    return 0;
}

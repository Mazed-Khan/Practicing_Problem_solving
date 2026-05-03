#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    for (int i = 0; i < T; i++) {
        int X, N;
        cin >> X >> N;

        if (X > N) {
            cout << "Invalid!" << endl;
        } else {
            for (int j = 1; j * X <= N; j++) {
                cout << j * X << endl;
            }
            cout << endl;
        }
    }
    return 0;
}

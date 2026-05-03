#include <iostream>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        for (int k = N; k >= 0; --k) {
            if (k == 1) cout << "2";
            else if (k == 0) cout << "1";
            else cout << "2^" << k;
            if (k > 0) cout << " + ";
        }
        cout << endl;
    }
    return 0;
}

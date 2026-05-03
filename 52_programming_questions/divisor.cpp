#include <iostream>
using namespace std;
int main() {
    int T;
    cin >> T;

    for(int i = 0; i < T; i++) {
        int N;
        cin >> N;
        cout << "Case " << i + 1 << ":";
        for(int j = 1; j <= N; j++) {
            if(N % j == 0) {
                cout << " " << j;
            }
        }
        cout << endl;
    }

    return 0;
}

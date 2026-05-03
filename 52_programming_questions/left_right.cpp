#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;
        string result = "";
        for (int i = 0; i < S.length(); i++) {
            if (S[i] == 'L') {
                result += S[i - 1];
            } else if (S[i] == 'R') {
                result += S[i + 1];
            } else {
                result += S[i];
            }
        }
        cout << result << endl;
    }
    return 0;
}
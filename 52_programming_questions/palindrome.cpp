#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S;
        cin >> S;

        string reversed_S = S;
        reverse(reversed_S.begin(), reversed_S.end());

        if (S == reversed_S) {
            cout << "Yes! It is palindrome!" << endl;
        } else {
            cout << "Sorry! It is not palindrome!" << endl;
        }
    }
    return 0;
}
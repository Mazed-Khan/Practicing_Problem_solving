#include <iostream>
#include <cctype>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        char c;
        cin >> c;

        
        if (isdigit(c)) {
            cout << "Numerical Digit"<< endl;
        } else if (islower(c)) {
            cout << "Lowercase Character"<< endl;
        } else if (isupper(c)) {
            cout << "Uppercase Character"<< endl;
        } else {
            cout << "Special Character"<< endl;
        }
    }

    return 0;
}

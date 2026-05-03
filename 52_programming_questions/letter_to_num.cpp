#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        string input;
        cin >> input;

        for (char c : input) {
            cout << (c - 'A' + 1); 
        }
        cout << endl;
    }
    return 0;
}

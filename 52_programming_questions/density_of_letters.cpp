#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++) {
        string str;
        char check;
        getline(cin, str);
        cin >> check;
        cin.ignore();

        int count = 0;
        for (char c : str) {
            if (c == check) {
                count++;
            }
        }

        if (count > 0) {
            cout << "Occurrence of '" << check << "' in '" << str << "' = " << count << endl;
        } else {
            cout << "'" << check << "' is not present" << endl;
        }
    }

    return 0;
}

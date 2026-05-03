#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string s, sub;
        cin >> s >> sub;

        size_t pos = s.find(sub);

        if (pos != string::npos) {
            cout << pos << endl;
        } else {
            cout << "-1" << endl;
        }
    }
    return 0;
}

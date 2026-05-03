#include <iostream>
#include <string>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        string main_string, sub_string;
        cin >> main_string >> sub_string;

        int count = 0;
        size_t pos = main_string.find(sub_string, 0);
        while (pos != string::npos) {
            count++;
            pos = main_string.find(sub_string, pos + 1);
        }
        cout << count << endl;
    }
    return 0;
}
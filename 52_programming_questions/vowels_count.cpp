#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string s;
        getline(cin, s);

        int count = 0;
        string vowel = "aeiouAEIOU";

        for (char x : s) {
            for (char y : vowel) {
                if (x == y) {
                    count++;
                    break;
                }
            }
        }

        cout << "Number of vowels = " << count << "\n";
    }

    return 0;
}
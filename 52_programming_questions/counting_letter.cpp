#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++) {
        string str;
        getline(cin, str);

        map<char, int> freq;

        for (char c : str) {
            if (c >= 'a' && c <= 'z') { // count only lowercase letters
                freq[c]++;
            }
        }

        for (auto &p : freq) {
            cout << p.first << " = " << p.second << endl;
        }
        if (i < T - 1) {
            cout << endl;
        }
    }

    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++) {
        string S;
        getline(cin, S);

        string vowels = "aeiou";
        string consonants = "bcdfghjklmnpqrstvwxyz";

        // vowels print
        for (char c : S) {
            for (char v : vowels) {
                if (c == v) {
                    cout << c;
                    break;
                }
            }
        }
        cout << endl;

        // consonants print
        for (char c : S) {
            for (char cons : consonants) {
                if (c == cons) {
                    cout << c;
                    break;
                }
            }
        }
        cout << endl;
    }

    return 0;
}
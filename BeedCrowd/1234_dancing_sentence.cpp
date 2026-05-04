#include <bits/stdc++.h>
using namespace std;

int main() {
    string sentence;

    while (getline(cin, sentence)) {
        bool makeUpper = true;

        for (int i = 0; i < sentence.length(); i++) {
            if (sentence[i] == ' ') {
                continue;
            }

            if (makeUpper) {
                sentence[i] = toupper(sentence[i]);
            } else {
                sentence[i] = tolower(sentence[i]);
            }

            makeUpper = !makeUpper;
        }

        cout << sentence << endl;
    }

    return 0;
}
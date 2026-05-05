#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    cin.ignore();

    while (t--) {
        string fullSentence;
        getline(cin, fullSentence);

        stringstream sentenceStream(fullSentence);
        string currentWord;
        string hiddenMessage = "";

        while (sentenceStream >> currentWord) {
            hiddenMessage += currentWord[0];
        }

        cout << hiddenMessage << endl;
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++) {
        string str;
        getline(cin, str);

        stringstream ss(str);
        string word;
        string result = "";

        while (ss >> word) {
            reverse(word.begin(), word.end());
            result += word + " ";
        }

        if (!result.empty()) {
            result.pop_back();
        }

        cout << result << endl;
    }

    return 0;
}
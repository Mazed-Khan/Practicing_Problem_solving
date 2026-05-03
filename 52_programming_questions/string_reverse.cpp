#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++) {
        string S;
        getline(cin, S);
        for (int j = S.length() - 1; j >= 0; j--) {
        cout << S[j];
    }
        cout<<endl;

    }
    return 0;
}

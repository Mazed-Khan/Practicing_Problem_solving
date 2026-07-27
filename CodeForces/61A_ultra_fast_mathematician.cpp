#include <bits/stdc++.h>
using namespace std;

int main() {

    string s1, s2, result;
    cin >> s1 >> s2;

    for (int i = 0; i < s1.length(); i++) {
        if ((s1[i] == '1' && s2[i] == '0') || (s1[i] == '0' && s2[i] == '1')) {
            result.push_back('1');
        } else {
            result.push_back('0');
        }
    }

    cout << result << endl;

    return 0;
}
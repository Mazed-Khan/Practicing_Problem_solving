#include <bits/stdc++.h>
using namespace std;

int main() {
    string str;
    cin >> str;

    string digits = "";
    for(int i = 0; i < str.length(); i++){
        if(str[i] != '+'){
            digits += str[i];
        }
    }

    sort(digits.begin(), digits.end());

    int n = digits.length();
    for(int i = 0; i < n; i++){
        cout << digits[i];
        if(i < n-1) cout << '+';
    }

    return 0;
}
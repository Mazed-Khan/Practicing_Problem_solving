#include <bits/stdc++.h>
using namespace std;

int main() {
    int d;
    string n;
    while (cin >> d >> n && !(d == 0 && n == "0")) {
        string result = "";
        for (char c : n) {
            if (c - '0' != d) result += c;
        }
        // Remove leading zeros
        int start = 0;
        while (start < (int)result.size() - 1 && result[start] == '0') start++;
        if (result.empty()) cout << "0\n";
        else cout << result.substr(start) << "\n";
    }
    return 0;
}
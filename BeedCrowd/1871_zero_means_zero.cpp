#include <bits/stdc++.h>
using namespace std;

int main() {
    long long M, N;

    while (cin >> M >> N) {
        if (M == 0 && N == 0) break;

        long long total = M + N;
        string totalString = to_string(total); //conversting total into a string 

        string answer = "";

        for (char ch : totalString) {
            switch (ch) {
                case '0':
                    break;
                default:
                    answer += ch;
            }
        }

        if (answer == "") {
            cout << 0 << endl;
        } else {
            cout << answer << endl;
        }
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore();

    for (int i = 0; i < T; i++) {
        string line;
        getline(cin, line);

        stringstream ss(line);
        map<string, int> freq;
        string w;
        int n = 0;
        while (ss >> w) {
            freq[w]++;
            n++;
        }

        long long total = 1;
        for (int j = 1; j <= n; j++) total *= j;

        for (auto &p : freq) {
            long long f = 1;
            for (int j = 1; j <= p.second; j++) f *= j;
            total /= f;
        }

        cout << "1/" << total << "\n";
    }

    return 0;
}

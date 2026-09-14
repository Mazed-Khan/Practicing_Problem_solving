#include <bits/stdc++.h>
using namespace std;

int main() {
    long long s, n;
    cin >> s >> n;

    vector<pair<long long, long long>> d(n);

    for (auto &p : d)
        cin >> p.first >> p.second;

    sort(d.begin(), d.end());

    for (auto &p : d) {
        if (s > p.first)
            s += p.second;
        else {
            cout << "NO"<<endl;
            return 0;
        }
    }

    cout << "YES"<<endl;
    return 0;
}
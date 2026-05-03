#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;

    while (cin >> n && n != 0) {

        for (int m = 1; ; m++) {

            vector<int> city;
            for (int i = 1; i <= n; i++) {
                city.push_back(i);
            }

            int index = 0;

            while (city.size() > 1) {
                index = (index + m - 1) % city.size();
                city.erase(city.begin() + index);
            }

            if (city[0] == 13) {
                cout << m << endl;
                break;
            }
        }
    }

    return 0;
}
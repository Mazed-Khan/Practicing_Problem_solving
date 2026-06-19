#include <bits/stdc++.h>
using namespace std;

int main(){

    int n, k;
    cin >> n >> k;

    vector<int> contestent;

    for (int i = 0; i < n; i++) {
        long long point;
        cin >> point;
        contestent.push_back(point);
    }

    int checker = contestent[k-1];
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (contestent[i] >= checker && contestent[i] > 0) {
            count++;
        }
    }

    cout << count;

    return 0;
}
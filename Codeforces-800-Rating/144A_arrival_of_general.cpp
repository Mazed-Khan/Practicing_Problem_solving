#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;

    vector<int> height(n);

    for (int i = 0; i < n; i++) {
        cin >> height[i];
    }

    int max_height = 0;
    int min_height = 101;

    int max_ind = 0;
    int min_ind = 0;

    for (int i = 0; i < n; i++) {

        if (height[i] > max_height) {
            max_height = height[i];
            max_ind = i;
        }

        if (height[i] <= min_height) {
            min_height = height[i];
            min_ind = i;
        }
    }

    int ans;

    if (min_ind > max_ind) {
        ans = max_ind + (n - 1 - min_ind);
    }
    else {
        ans = max_ind + (n - 1 - min_ind) - 1;
    }

    cout << ans << endl;

    return 0;
}
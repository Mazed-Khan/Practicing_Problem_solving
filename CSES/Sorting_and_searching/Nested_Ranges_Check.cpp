#include <bits/stdc++.h>
using namespace std;

struct Range {
    int L, R, Indx;
};

bool cmp(Range a, Range b) {
    if (a.L == b.L) return a.R > b.R;
    return a.L < b.L;
}

int main() {
    int n;
    cin >> n;

    vector<Range> v(n);
    for (int i = 0; i < n; i++) {
        int L, R;
        cin >> L >> R;
        v[i] = {L, R, i};
    }

    sort(v.begin(), v.end(), cmp);

    vector<int> ans1(n, 0), ans2(n, 0);

    int mx = -1;
    for (int i = 0; i < n; i++) {
        int crntR = v[i].R;
        if (mx >= crntR) ans2[v[i].Indx] = 1;

        mx = max(mx, v[i].R);
    }

    int mn = 1e9 + 2;
    for (int i = n - 1; i >= 0; i--) {
        int crntR = v[i].R;
        if (mn <= crntR) ans1[v[i].Indx] = 1;

        mn = min(mn, v[i].R);
    }

    for (int i = 0; i < n; i++) cout << ans1[i] << ' ';
    cout << endl;

    for (int i = 0; i < n; i++) cout << ans2[i] << ' ';
}
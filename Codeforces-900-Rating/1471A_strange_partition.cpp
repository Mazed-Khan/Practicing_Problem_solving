#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        long long mn = 0, mx = 0;
        for(int i = 0; i < n; i++){
            mx += (long long)ceil(a[i] * 1.0 / x);
            mn += a[i];
        }
        mn = (long long)ceil(mn * 1.0 / x);
        cout << mn << " " << mx << endl;
    }
    return 0;
    // For each test, print min = ceil(sum/x) (merge everything) and max = sum of ceil(a[i]/x) (no merging).
}
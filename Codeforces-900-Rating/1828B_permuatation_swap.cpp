#include <bits/stdc++.h>
using namespace std;

int my_gcd(int a, int b){
    return b == 0 ? a : my_gcd(b, a % b);
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int k = 0;
        for(int i = 0; i < n; i++){
            k = my_gcd(k, abs(a[i] - (i + 1)));
        }
        cout << k << endl;
    }

    return 0;
}
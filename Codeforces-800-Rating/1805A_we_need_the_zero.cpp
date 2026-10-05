#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, total = 0;
        cin >> n;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            total ^= x;
        }
        if(n % 2 == 1 || total == 0) cout << total << endl;
        else cout << -1 << endl;
    }
    return 0;
}
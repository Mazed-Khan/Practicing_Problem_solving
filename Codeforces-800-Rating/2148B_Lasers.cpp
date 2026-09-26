#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ;
    cin >> t;
    while(t--){
        int n , m , x , y,s;
        cin >> n >> m >> x >> y;
        for(int i = 0; i < n; i++) cin >> s;
        for(int i = 0; i < m; i++) cin >> s;
        cout << n + m << endl; // any path from (0,0) to (x,y) must cross every laser, so the answer is just n + m
    }
    
    return 0;
}
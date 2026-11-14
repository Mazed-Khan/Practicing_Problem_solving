#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int a , b , c ; cin >> a >> b >> c;

        if(a == b || a == c || b == c){
            cout << "NO" << endl;
        }else{
            if(b - a == 1 && c - b == 1){
                cout << "YES" << endl;
            }else{
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
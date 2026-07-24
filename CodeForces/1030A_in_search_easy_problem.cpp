#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    
    bool level = true;

    for(int i = 0 ; i < n; i++){
        int a;
        cin>> a;
        if( a == 1 ){
            level =false;
        }
    }

    cout << (level ? "EASY" : "HARD") << endl;
    
    return 0;
}
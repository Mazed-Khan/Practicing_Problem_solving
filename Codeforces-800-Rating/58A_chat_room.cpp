#include <bits/stdc++.h>
using namespace std;

int main() {

    string s ;
    cin >> s;

    string w = "hello";

    int check = 0;

    for(int i = 0; i< s.length() ; i++){

        if(w[check] == s[i]){
            check++;
        }
        if(check == 5){
            cout << "YES" <<endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    

    return 0;
}
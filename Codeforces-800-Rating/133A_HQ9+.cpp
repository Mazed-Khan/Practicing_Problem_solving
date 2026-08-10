#include <bits/stdc++.h>
using namespace std;

int main() {

    string p ;
    cin >> p ;

    bool check = false ;
    for (int i = 0 ; i< p.length() ; i++){

        if(p[i] == 'H' || p[i] == '9' || p[i] == 'Q'){
            check = true ;
            break;
        }
    }
    
    cout << (check ? "YES":"NO") <<endl;
    

    return 0;
}
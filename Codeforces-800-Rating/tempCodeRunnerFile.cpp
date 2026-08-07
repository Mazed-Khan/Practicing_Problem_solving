#include <bits/stdc++.h>
using namespace std;

int main() {

    int n , k;
    cin >> n >> k;

    bool check = false ;
    vector <int > a(n);

    for( int i = 0; i < n; i++ ){
        cin>>a[i];
        if(a[i] == k){
            check = true;
        }
    }

    cout << (!check ? "Yes" : "No") << endl;
    

    return 0;
}
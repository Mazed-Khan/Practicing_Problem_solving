#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        long long n ;
        cin >> n ;

        long long div_four = n / 4 ;
        long long div_six = (n + 5) / 6;

        if(n < 4 || n % 2 == 1){
            cout << -1 << endl;
        }else{
            cout << div_six << " " << div_four << endl;
        }
    }
    
    return 0;
}
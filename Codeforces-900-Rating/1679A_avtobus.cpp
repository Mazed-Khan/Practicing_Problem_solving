#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n ;
        cin >> n ;

        int div_four = n / 4 ;
        int div_six = n / 6;

        if(n % 2 == 1){
            cout << -1 << endl;
        }else{
            cout << min(div_four,div_six) <<" " <<max(div_four,div_six);
        }
    }
    
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int T;
    cin >> T;
    
    while(T--) {
        
        int X , Y , Z;
        cin >> X >> Y >> Z;
        
        if( Z <= Y){
            cout << -1 << endl;
        }else{
            int diff = Z - Y;
            int ans = X / diff ;
            
            if(X % diff !=0){
                ans ++;
            }
            cout << ans <<endl;
        }
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    
    int T;
    cin >> T ;
    
    while(T--){
        int N , X , Y;
        cin >> N >> X >> Y;
        
        if(N <= 3){
            cout << N * X <<endl;
        }else{
            N = N-3;
            cout << (N * Y) + X*3 << endl;
        }
    }
    return 0;
}

#include<bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int x;
        cin >> x;

        int y = 1;

        while(x > 0){ 
            y *= 10;
            x /= 10; // Find 10^(number of digits in x), then output it + 1.
        }

        cout << y + 1 << endl;
    }

    return 0;
}
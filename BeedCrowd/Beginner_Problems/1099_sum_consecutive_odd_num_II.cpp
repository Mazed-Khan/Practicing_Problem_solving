#include<bits/stdc++.h>
using namespace std;

int main(){

    int N;
    cin >> N;

    while(N--){
        int X, Y;
        cin >> X >> Y;

        int lo = min(X, Y) + 1;
        int hi = max(X, Y) - 1;

        int sum = 0;
        for(int i = lo; i <= hi; i++){
            if(i % 2 != 0){
                sum += i;
            }
        }
        cout << sum << endl;
    }

    return 0;
}
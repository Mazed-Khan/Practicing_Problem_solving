#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        double a, b, c;
        cin >> a >> b >> c;
        double media = (a*2 + b*3 + c*5) / 10;
        cout << fixed << setprecision(1) << media << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {

    int a , b;
    cin>> a >> b;

    int n = a + b;

    for(int i = 0; i < n; i++){
        if( a > b){
        cout << i;
        break;
      }
      a = a*3;
      b = b*2;
    }
    

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int v;
    cin >> v;

    int N[10];
    N[0] = v;

    for(int i = 1; i < 10; i++){
        N[i] = N[i-1] * 2;
    }

    for(int i = 0; i < 10; i++){
        cout << "N[" << i << "] = " << N[i] << endl;
    }

    return 0;
}
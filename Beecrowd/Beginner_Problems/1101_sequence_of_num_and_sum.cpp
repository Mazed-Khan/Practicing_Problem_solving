#include<bits/stdc++.h>
using namespace std;

int main(){
    int m, n;
    while(cin >> m >> n){
        if(m <= 0 || n <= 0) break;

        int menor = min(m, n);
        int maior = max(m, n);
        int soma = 0;

        for(int i = menor; i <= maior; i++){
            cout << i << " ";
            soma += i;
        }

        cout << "Sum=" << soma << endl;
    }

    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int main(){
    int h1, m1, h2, m2;
    cin >> h1 >> m1 >> h2 >> m2;
    int start = h1*60 + m1;
    int end = h2*60 + m2;
    int dur = end - start;
    if(dur <= 0) dur += 1440;
    cout << "O JOGO DUROU " << dur/60 << " HORA(S) E " << dur%60 << " MINUTO(S)" << endl;
    return 0;
}
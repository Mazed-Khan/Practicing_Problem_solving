#include<bits/stdc++.h>
using namespace std;

int main(){
    int d1,d2,h1,m1,s1,h2,m2,s2;
    char c;
    string lixo;

    cin >> lixo >> d1;
    cin >> h1 >> c >> m1 >> c >> s1;
    cin >> lixo >> d2;
    cin >> h2 >> c >> m2 >> c >> s2;

    long long t1 = ((long long)d1*24*3600) + h1*3600 + m1*60 + s1;
    long long t2 = ((long long)d2*24*3600) + h2*3600 + m2*60 + s2;

    long long diff = t2 - t1;

    long long dias = diff / (24*3600);
    diff %= 24*3600;
    long long horas = diff / 3600;
    diff %= 3600;
    long long minutos = diff / 60;
    long long segundos = diff % 60;

    cout << dias << " dia(s)" << endl;
    cout << horas << " hora(s)" << endl;
    cout << minutos << " minuto(s)" << endl;
    cout << segundos << " segundo(s)" << endl;

    return 0;
}
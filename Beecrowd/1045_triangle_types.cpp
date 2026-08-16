#include<bits/stdc++.h>
using namespace std;

int main(){
    double a, b, c, aux;
    cin >> a >> b >> c;

    if(a < b){ aux = a; a = b; b = aux; }
    if(a < c){ aux = a; a = c; c = aux; }
    if(b < c){ aux = b; b = c; c = aux; }

    if(a >= b + c){
        cout << "NAO FORMA TRIANGULO" << endl;
    }
    else{
        if(a == b && b == c){
            cout << "TRIANGULO EQUILATERO" << endl;
        }
        else if(a == b || b == c){
            cout << "TRIANGULO ISOSCELES" << endl;
        }

        if(a*a == b*b + c*c){
            cout << "TRIANGULO RETANGULO" << endl;
        }
        else if(a*a > b*b + c*c){
            cout << "TRIANGULO OBTUSANGULO" << endl;
        }
        else{
            cout << "TRIANGULO ACUTANGULO" << endl;
        }
    }

    return 0;
}
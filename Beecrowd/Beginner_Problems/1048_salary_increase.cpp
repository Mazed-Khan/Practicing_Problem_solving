#include<bits/stdc++.h>
using namespace std;

int main(){
    double sal;
    cin >> sal;
    
    double perc;
    if(sal <= 400.00) perc = 15;
    else if(sal <= 800.00) perc = 12;
    else if(sal <= 1200.00) perc = 10;
    else if(sal <= 2000.00) perc = 7;
    else perc = 4;
    
    double reajuste = sal * perc / 100;
    double novo = sal + reajuste;
    
    cout << fixed << setprecision(2);
    cout << "Novo salario: " << novo << endl;
    cout << "Reajuste ganho: " << reajuste << endl;
    cout << "Em percentual: " << (int)perc << " %" << endl;
    
    return 0;
}
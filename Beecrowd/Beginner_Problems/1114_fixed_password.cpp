#include<bits/stdc++.h>
using namespace std;

int main(){
    int senha;
    while(cin>>senha){
        if(senha==2002){
            cout<<"Acesso Permitido"<<endl;
            break;
        }
        else
            cout<<"Senha inválida"<<endl;
    }
    return 0;
}
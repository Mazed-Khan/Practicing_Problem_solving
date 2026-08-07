#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    
    for(char ch : s){
        char c = tolower(ch);
        if(isalpha(ch) && c != 'a' && c != 'e' && c != 'i' && c != 'o' && c != 'u' && c != 'y'){
            cout << "." << c;
        }
    }
    cout << endl;
    
    return 0;
}
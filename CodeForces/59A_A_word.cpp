#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin>> s;

    int n = s.length();
    int uppercase_count = 0;

    for(int i = 0 ; i< n; i++){

        if(isupper(s[i])){
            uppercase_count++;
        }
    }
    
    if(uppercase_count <= n/2){
        transform(s.begin(), s.end(), s.begin(), ::tolower);
        cout<< s <<endl;
    }else{
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        cout<< s <<endl;

    }
    

    return 0;
}
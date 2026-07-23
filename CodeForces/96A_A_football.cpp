#include <bits/stdc++.h>
using namespace std;

int main() {

    string s;
    cin >> s;

    bool check = false;

    int count = 0;

    int n = s.length();
    for(int i = 0; i< n; i++){
        if(i >0 && s[i] == s[i-1]){
            count++;
            if(count == 6){
                check = true;
                break;
            }
        }else{
            count = 0;
        }
    }

    if(check){
        cout<< "YES" << endl;
    }else{
        cout <<"NO" << endl;
    }
    

    return 0;
}
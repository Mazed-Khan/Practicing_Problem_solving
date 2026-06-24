#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n;
        cin >> n;

        string s;
        cin >> s;

        bool hasThree = false;
        int dot_count = 0;

        for (int i = 0; i < n; i++) {
            if(s[i] == '.') dot_count++;

            if(i >= 1 && i + 1 < n){
                if(s[i-1] == '.' && s[i] == '.' && s[i+1] == '.'){
                    hasThree = true;
                }
            }
        }

        if(hasThree)
            cout << 2 << endl;
        else
            cout << dot_count << endl;
    }

    return 0;
}
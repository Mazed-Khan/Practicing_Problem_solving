#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    while(cin >> n){
        vector<string> words(n);
        for(int i=0;i<n;i++){
            cin >> words[i];
            if(words[i].size()==3){
                string p = words[i].substr(0,2);
                if(p=="OB") words[i][2]='I';
                else if(p=="UR") words[i][2]='I';
            }
        }
        for(int i=0;i<n;i++){
            cout << words[i];
            if(i!=n-1) cout << " ";
        }
        cout << "\n";
    }
    return 0;
}
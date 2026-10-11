#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int t;
    cin >> t;
    while(t--){
        int n, ans = 0, open = 0;
        cin >> n;
        string s;
        cin >> s;

        for(int i = 0; i < n; i++){
            if(s[i] == ')'){
                if(open > 0){
                    open--;
                }
                else{
                    ans++;
                }
            }
            else{
                open++;
            }
        }
        cout << ans << endl;
    }

    return 0;
}
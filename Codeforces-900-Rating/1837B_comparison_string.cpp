#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int n;
        string s;
        cin >> n >> s;

        int count = 1;
        int max_count = 1;

        for (int i = 1; i < n; i++){
            if (s[i] == s[i - 1]){
                count++;
            }
            else{
                count = 1;
            }

            max_count = max(max_count, count);
        }

        cout << max_count + 1 << endl;
    }
    return 0;
}
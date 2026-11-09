#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int test;
    cin >> test;
    while(test--){
        string s, t;
        cin >> s >> t;

        int n = s.size();
        int m = t.size();

        vector<int> a(26, 0);
        for(int i = 0; i < m; i++){
            a[t[i] - 'A']++;
        }

        string final_string = "";
        for(int i = n - 1; i >= 0; i--){
            if(a[s[i] - 'A'] > 0){
                a[s[i] - 'A']--;
                final_string += s[i];
            }
        }
        reverse(final_string.begin(), final_string.end());

        cout << (final_string == t ? "YES" : "NO") << endl;
    }
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        int n ;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        int left = a[0] , right = a[0];
        for(int i = 0; i < n; i++){
            if(a[i] + 1 == left) left = a[i];
                else if(a[i] == right) right = a[i];
                else{
                    cout << "NO" <<endl;
                }
        }
        cout << "YES" <<endl;
        
    }

    return 0;
}
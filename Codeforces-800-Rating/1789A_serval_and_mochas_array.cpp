#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ;
    cin >> t;
    while(t--){
        long long n ;
        cin >> n;

        vector<int> a(n);
        for(int i = 0; i< n ;i++){
            cin >> a[i];
        }

        bool check = false;
        for(int i = 0 ; i < n ; i++){
            for(int j = i+1 ; j < n; j++ ){

                if(__gcd(a[i],a[j]) <= 2){
                    check = true;
                }
            }
        }

        cout << (check ? "YES" : "NO") << endl;
    }
    
    return 0;
}
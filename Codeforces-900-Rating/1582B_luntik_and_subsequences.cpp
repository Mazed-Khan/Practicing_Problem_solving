#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }
        
        long long ones = 0 , zeros = 0;
        for(int i = 0; i < n; i++){
            if (a[i] == 1)
            {
                ones++ ;
            }else if (a[i] == 0)
            {
                zeros++;
            }
        }
        long long ways = pow(2, zeros) * ones;
        cout<< ways<< endl;
    }

    return 0;
}
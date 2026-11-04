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
        // Each 0 can be freely included or excluded (2^zeros subsets), and we must pick at least one 1 as the "special" element, so the count is 2^zeros * ones.
    }

    return 0;
}
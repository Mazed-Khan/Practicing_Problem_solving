#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);

        int minus_count = 0 ;
        int sum = 0 ;
        int ans = 0;

        for(int i = 0 ; i< n; i++){
            cin >>a[i];
            sum = sum + a[i]; 
            if(a[i]<0)minus_count++;
        }

        if(minus_count % 2 ==1){
            ans++;
            sum = sum+2;
            minus_count = minus_count -1 ;
        }

        while(sum < 0){
            ans = ans + 2 ;
            sum = sum + 4 ;
        }
        cout <<ans <<endl;
    }

    
    return 0;
}
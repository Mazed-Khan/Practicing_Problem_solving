#include <bits/stdc++.h>
using namespace std;

int main(){

    int t ;
    cin >> t;
    while(t--){
        int n ,l ,r ;
        cin >> n >> l >> r;
        vector<int>a(n);
        for(int i = 0 ;i < n ; i++){
            cin >> a[i];
        }
        sort(a.begin(),a.end());

        long long pair_cnt = 0 ;
        for(int i = 0 ; i < n - 1 ; i++){

            int left = i + 1 , right = n ;
            while(left < right){
                int mid = (left + right) / 2;
                // sum >= l hole mid ba tar bame aro valid j thakte pare, tai right = mid
                if(a[i] + a[mid] >= l){
                    right = mid;
                }else{
                    left = mid + 1;
                }
            }
            int low = left;

            left = i + 1 , right = n ;
            while(left < right){
                int mid = (left + right) / 2;
                // sum > r hole mid theke dane sob invalid, tai right = mid
                if(a[i] + a[mid] > r){
                    right = mid;
                }else{
                    left = mid + 1;
                }
            }
            int high = left;

            pair_cnt += high - low;
        }

        cout << pair_cnt << endl;
    }

    return 0;
}
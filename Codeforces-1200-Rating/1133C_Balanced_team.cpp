#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n ;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    int left = 0 , right = 0, cnt = 0 , ans = 0;

    while (right <= n - 1)
    {
        while( a[right] - a[left] > 5 ){
            left++;
        }
        cnt = right - left + 1;
        ans = max(ans, cnt);
        right++;
    }
    cout << ans ;

    return 0;
}
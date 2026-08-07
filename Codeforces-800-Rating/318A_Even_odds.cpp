#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n, k;
    cin >> n >> k;
    long long oddCount = (n + 1) / 2;
    long long ans;
    if(k <= oddCount){
        ans = 2 * k - 1;
    }
    else{
        ans = 2 * (k - oddCount);
    }
    cout << ans << endl;
    return 0;
}
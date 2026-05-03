#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int T;
    cin >> T;
    for (int i = 0; i < T; i++) {
    long long A,B,C;
    cin >> A >> B >>C;

    for (long long j = 1; j<=C; j++){
        if(j%A==0 && j%B ==0){
            cout<<j<<endl;
        }
    }
    cout<<endl;
    }
    return 0;
}

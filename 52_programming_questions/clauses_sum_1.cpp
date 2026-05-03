#include <bits/stdc++.h>
using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int X,K;
        cin>>X>>K;
        int result = 0;
        for(int i = 0;i<=K;i++){
            result += pow(X ,i);
        }
        cout<<"Result = "<<result<<endl;
    }
    return 0;
}

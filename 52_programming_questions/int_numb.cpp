#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        long long N;
        cin >> N;
        long long sqrt_N= (long long)(sqrt(N));
        if(sqrt_N*sqrt_N==N){
            cout<<"YES";
        }else{
            cout<<"NO";
        }
        cout<<endl;
    }
    return 0;
    }




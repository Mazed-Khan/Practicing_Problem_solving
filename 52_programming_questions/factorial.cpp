#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int T;

    cin >> T;
    for (int i = 0; i < T; i++) {
    int N;
    long long result=1;
    cin>>N;

    for(int j =1 ;j<=N;j++){
        result = result  * j;
    }
    cout<<result<<endl;
    }
    return 0;
}

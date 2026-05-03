#include <iostream>
using namespace std;
int main() {

    int T;
    cin >> T;

    for(int i = 0; i < T; i++) {
        int N;
        cin >> N;
        int sum = N*N;
        for(int j=0; j<sum; j++){
            if (j % N == 0 && j!=0){
                cout<<"\n";
            }
                cout<<"*";
        }
        cout << "\n";
        if(i != T - 1) cout << "\n";

    }
    return 0;
}

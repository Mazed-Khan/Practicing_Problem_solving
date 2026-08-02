#include<bits/stdc++.h>
using namespace std;

int main(){

    int N;
    string S;
    cin >> N >> S;

    int count = 0;
    for(int i = 0; i < N; i++){
        bool leftOk = (i == 0 || S[i-1] != 'o');
        bool rightOk = (i == N-1 || S[i+1] != 'o');

        if(S[i] != 'o' && leftOk && rightOk){
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main() {

    int N;
    cin >> N;
    vector<int> vec;

    for(int i = 0; i < N; i++){
        int A;
        cin >> A;
        vec.push_back(A);
    }

    int min = vec[0];

    for(int i = 0; i < N; i++){
        if(abs(vec[i]) < abs(min)){
            min = vec[i];
        }
    }

    cout << abs(min) << endl;

    return 0;
}
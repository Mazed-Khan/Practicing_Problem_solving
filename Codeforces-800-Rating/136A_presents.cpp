#include <bits/stdc++.h>
using namespace std;

int main() {

    int n , num;
    cin >> n;

    vector<int> vec (n + 1);

    for(int i = 1; i <= n; i++){
        cin >> num;
        vec[num] = i;
    }

    for(int i = 1 ; i <= n; i++){
        cout << vec[i] <<" ";
    }
    cout << endl;
    return 0;
}
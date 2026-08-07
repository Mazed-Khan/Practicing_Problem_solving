#include <bits/stdc++.h>
using namespace std;

int main() {

    int n , total = 0;
    cin >> n;

    vector <int> vec (n);

    for(int i = 0 ; i < n ; i++ ){
        cin >> vec[i];
        total += vec[i];
    }

    sort(vec.rbegin() , vec.rend());

    total = total / 2;
    int sum = 0;
    int coins = 0 ;

    for( int  i = 0; i < vec.size() ; i++){
        sum += vec[i];
        coins++;
        if(sum > total){
            cout << coins << endl;
            break;
        }
    }

    

    return 0;
}
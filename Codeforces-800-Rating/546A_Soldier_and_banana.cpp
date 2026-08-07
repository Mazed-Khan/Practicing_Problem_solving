#include <bits/stdc++.h>
using namespace std;

int main() {

    long long  k , n, w;
    cin>> k >> n >>w;

    long long  sum = w * (w + 1) /2;

    long long  total_cost =  k * sum;

    long long  borrow = total_cost - n;

    if(total_cost > n){
        cout<< borrow <<endl;
    }else{
        cout << 0 << endl;
    }

    return 0;
}
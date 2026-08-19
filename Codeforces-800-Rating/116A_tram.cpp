#include <bits/stdc++.h>
using namespace std;

int main() {

    int n; 
    cin >> n;

    int count = 0, result = 0;

    while(n--){
        int out;
        cin >> out;
        count -= out;

        int in;
        cin >> in;
        count += in;

        result = max(result, count);
    }   
    
    cout << result << endl;
    return 0;
}
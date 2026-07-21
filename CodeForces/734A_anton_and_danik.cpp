#include <bits/stdc++.h>
using namespace std;

int main() {

    int  n; 
    string s;

    cin >> n >> s;
    
    int a_count = 0;

    for(int i = 0; i< n; i++){
        if(s[i] == 'A') a_count++;
    }
    
    int d_count = n - a_count;

    if(a_count > d_count){
        cout << "Anton" << endl;
    } else if(a_count < d_count){
        cout << "Danik" << endl;
    } else{
        cout << "Friendship" << endl;
    }
    

    return 0;
}
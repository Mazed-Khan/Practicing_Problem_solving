#include <bits/stdc++.h>
using namespace std;

int main() {
    
    string str ;
    cin >> str ;
    
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    sort(str.begin(), str.end());

    int n = str.length();

    int count = 0;
    for(int i = 0; i< n; i++ ){
        
        if(i >= 1 && str[i] == str[i-1] ){
            count = count ;
        }else{
            count++;
        }
    }    

    if(count % 2 == 0){
        cout<< "CHAT WITH HER!"<<endl;
    }else{
        cout<< "IGNORE HIM!"<<endl;
    }

    return 0;
}
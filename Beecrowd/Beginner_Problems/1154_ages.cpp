#include<bits/stdc++.h>
using namespace std;

int main(){
    int age;
    int count = 0;
    double sum = 0;
    while(cin >> age && age >= 0){
        sum += age;
        count++;
    }
    cout << fixed << setprecision(2) << sum / count << endl;
    return 0;
}
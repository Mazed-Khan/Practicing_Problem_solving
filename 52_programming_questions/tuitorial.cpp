#include <bits/stdc++.h>
using namespace std;

int main() {
    int timE, avg_speed;
    cin >> timE >> avg_speed;
    
    double milage = 12.0; 
    double fuel = (avg_speed / milage) * timE;
    
    cout << fixed << setprecision(3);
    cout << fuel << endl;
    
    return 0;
}
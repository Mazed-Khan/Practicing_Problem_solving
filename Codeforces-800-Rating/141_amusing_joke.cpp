#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b, c;
    cin >> a >> b >> c;
    
    string combined = a + b;
    sort(combined.begin(), combined.end());
    sort(c.begin(), c.end());
    
    cout << (combined == c ? "YES" : "NO") << endl;
    
    return 0;
}
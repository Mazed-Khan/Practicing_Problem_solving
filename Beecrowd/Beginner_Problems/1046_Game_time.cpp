#include <bits/stdc++.h>
using namespace std;

int main() {
    int start, end_;
    cin >> start >> end_;
    
    int duration;
    if (start == end_) duration = 24;
    else if (end_ > start) duration = end_ - start;
    else duration = 24 - start + end_;
    
    cout << "O JOGO DUROU " << duration << " HORA(S)" << endl;
    
    return 0;
}
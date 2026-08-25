#include <bits/stdc++.h>
using namespace std;

int main() {

    set<char> s;
    char x;

    while(cin >> x) {

        if(x == '}')
            break;

        if(x >= 'a' && x <= 'z')
            s.insert(x);
    }

    cout << s.size();

    return 0;
}
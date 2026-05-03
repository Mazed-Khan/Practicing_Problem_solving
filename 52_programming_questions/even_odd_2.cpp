#include <iostream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;

    while(T--) {
        string N;
        cin >> N;

        char lastDigit = N.back(); 
        if ((lastDigit - '0') % 2 == 0)
            cout << "even" << endl;
        else
            cout << "odd" << endl;
    }

    return 0;
}
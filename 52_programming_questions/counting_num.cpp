#include <iostream>
#include <sstream> 
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    cin.ignore(); 

    for (int i = 0; i < T; i++) {
        string line;
        getline(cin, line); 

        stringstream ss(line);
        int num, count = 0;

        while (ss >> num) {
            count++;
        }

        cout << count << endl;
    }

    return 0;
}

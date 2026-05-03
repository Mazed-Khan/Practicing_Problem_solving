#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    int T;
    cin >> T;
    for(int i = 0; i < T; i++) {
        int n1,n2,n3;
        cin >> n1>>n2>>n3;
        int smallest = (n1 < n2 ? (n1 < n3 ? n1 : n3) : (n2 < n3 ? n2 : n3));
        int largest  = (n1 > n2 ? (n1 > n3 ? n1 : n3) : (n2 > n3 ? n2 : n3));
        int middle   = n1 + n2 + n3 - smallest - largest;

        cout <<"Case "<<i+1<<": " << smallest << " " << middle << " " << largest << endl;

    }

    return 0;
}

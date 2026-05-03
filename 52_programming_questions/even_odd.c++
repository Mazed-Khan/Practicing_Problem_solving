#include <iostream>
using namespace std;
int main() {

    int T;
    cin >> T;

    for(int i =0 ; i< T;i++){
        int N;
        cin >> N;
        if (N % 2 == 0) {
        cout << "even" << endl;
        } else {
        cout << "odd" << endl;
    }
    
    }


    return 0;
}
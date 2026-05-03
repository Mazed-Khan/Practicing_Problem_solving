#include <iostream>

using namespace std;
int main() {

    int T;
    int sum;
    int firstNum;
    int lastNum;
    cin >> T;

    for(int i = 0; i < T; i++) {
        int N;
        cin >> N;
        firstNum = N/10000;
        lastNum = N%10;
        sum=firstNum + lastNum;
        cout<<"Sum = "<< sum <<endl;
    }


    return 0;
}

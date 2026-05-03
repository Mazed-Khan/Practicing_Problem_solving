#include <iostream>
using namespace std;

int main() {
    int T;
    cin >> T;

    for (int i = 0; i < T; i++) {
        int arr[20];
        int n;
        cin >> n;

        for (int j = 0; j < n; j++) {
            cin >> arr[j];
        }

        bool ascending = true;
        bool descending = true;

        for (int j = 0; j < n - 1; j++) {
            if (arr[j] > arr[j + 1]) ascending = false;
            if (arr[j] < arr[j + 1]) descending = false;
        }

        if (ascending || descending)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int totalNames;
    cin >> totalNames;

    string currentName;
    string lastGoodKid = "";

    for (int i = 0; i < totalNames; i++) {
        cin >> currentName;

        if (currentName > lastGoodKid) {
            lastGoodKid = currentName;
        }
    }

    cout << lastGoodKid << endl;// Print the alphabetically largest name

    return 0;
}
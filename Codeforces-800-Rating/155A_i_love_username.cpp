#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int min_score, max_score;
    int count = 0;

    for (int i = 0; i < n; i++) {
        int score;
        cin >> score;

        if (i == 0) {
            min_score = score;
            max_score = score;
        } else if (score < min_score) {
            min_score = score;
            count++;
        } else if (score > max_score) {
            max_score = score;
            count++;
        }
    }

    cout << count << endl;
    return 0;
}
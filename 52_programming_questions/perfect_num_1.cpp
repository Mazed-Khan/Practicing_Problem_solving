#include <iostream>
#include <vector>
#include <cstdint>
using namespace std;

int main() {
    vector<uint64_t> perfectNumbers = {
        6ULL, 28ULL, 496ULL, 8128ULL,
        33550336ULL, 8589869056ULL,
        137438691328ULL, 2305843008139952128ULL
    };

    int T;
    cin >> T;
    while(T--) {
        uint64_t N;
        cin >> N;
        bool found = false;
        for(auto p : perfectNumbers) {
            if(N == p) {
                found = true;
                break;
            }
        }
        if(found)
            cout << "YES, " << N << " is a perfect number!" << endl;
        else
            cout << "NO, " << N << " is not a perfect number!" << endl;
    }
    return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        long long n, x;
        cin >> n >> x;

        vector<long long> point_arr;
        point_arr.push_back(0);

        for (int i = 0; i < n; i++) {
            long long point;
            cin >> point;
            point_arr.push_back(point);
        }

        point_arr.push_back(x);

        n = point_arr.size();

        long long max_distance_between_points = 0;

        for (int i = 1; i < n; i++) {

            if (i == n - 1) {
                max_distance_between_points =
                    max(max_distance_between_points,
                        2 * (point_arr[i] - point_arr[i - 1]));
            } else {
                max_distance_between_points =
                    max(max_distance_between_points,
                        point_arr[i] - point_arr[i - 1]);
            }
        }

        cout << max_distance_between_points << endl;
    }

    return 0;
}
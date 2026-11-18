#include <bits/stdc++.h>
using namespace std;

int main(){

    int n;
    long long d;
    cin >> n >> d;

    vector<pair<long long, long long>> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i].first >> a[i].second;
    }

    sort(a.begin(), a.end());

    long long sum = 0, best = 0;
    int left = 0;

    for(int right = 0; right < n; right++){
        sum += a[right].second;

        while(a[right].first - a[left].first >= d){
            sum -= a[left].second;
            left++;
        }
        best = max(best, sum);
    }

    cout << best << endl;
    return 0;
}
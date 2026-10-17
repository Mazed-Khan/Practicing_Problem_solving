#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    int left = 0, right = n - 1, i = 0, sereja = 0, dima = 0;

    while(left <= right){
        int pick;
        if(a[left] > a[right]){
            pick = a[left];
            left++;
        } else {
            pick = a[right];
            right--;
        }

        if(i % 2 == 0) sereja += pick;
        else dima += pick;
        i++;
    }

    cout << sereja << " " << dima << endl;
    return 0;
}
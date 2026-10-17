#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> a(n);
        for(int i = 0; i < n; i++){
            cin >> a[i];
        }

        int left = 0, right = n - 1;
        while(left <= right){
            if(left == right){
                cout << a[left] << " ";
            } else {
                cout << a[left] << " " << a[right] << " ";
            }
            left++;
            right--;
        }
        cout << "\n";
    }
    return 0;
}
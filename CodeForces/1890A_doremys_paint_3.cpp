#include<bits/stdc++.h>
using namespace std;

int main(){

    int t ;
    cin>> t;
    while(t--){
        int n;
        cin>> n;
        long long a[n];
        for(int i = 0 ; i< n; i++){
            cin>> a[i];

        }

        map<long long, long long> freq_map; // shotre the frequence of each element
        for(int i = 0; i< n; i++){
            freq_map[a[i]]++;
        }

        if(freq_map.size()>= 3){ // if there is 3 distinct element then print No
            cout<< "No" <<endl;
        }else{
            long long freq_1 = freq_map.begin()->second;
            long long freq_2 = freq_map.rbegin()->second;

            if(freq_1 == freq_2){  // if freq are equal (even cases)
                cout << "Yes" << endl; 
            }else if( n % 2 == 1 && abs(freq_1 - freq_2) == 1){ // if array length odd then difference are must me 1 
                cout << "Yes" << endl;
            }else{
                cout << "No" << endl;
            }
        }

    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin >> t;

    while(t--){
        int n , m ,x,y;
        cin >> n >> m;

        int point_x = 0 , point_y = 0 ;

        int points = 0 ;
        
        while(n--){
            cin >> x >> y;
            points += x - point_x ;
            if((x - point_x) % 2 != abs(y - point_y) % 2){//if the parity not matched then wait one minutes
                points--;
            }
            point_x = x ;
            point_y = y ;
        }
        if(point_x != m ){
            points += (m-point_x);
        }
        cout<< points << endl;
    }
    
    return 0;
}
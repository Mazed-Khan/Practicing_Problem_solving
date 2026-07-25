#include<bits/stdc++.h>
using namespace std;

int main(){
    int x,y;
    cin>>x>>y;
    int lo=min(x,y), hi=max(x,y);
    long long soma=0;
    for(int i=lo;i<=hi;i++){
        if(i%13!=0)
            soma+=i;
    }
    cout<<soma<<endl;
    return 0;
}
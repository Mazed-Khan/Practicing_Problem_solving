#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n--){
        int x;
        cin>>x;
        if(x==0){
            cout<<"NULL"<<endl;
            continue;
        }
        if(x%2==0) cout<<"EVEN ";
        else cout<<"ODD ";
        if(x>0) cout<<"POSITIVE"<<endl;
        else cout<<"NEGATIVE"<<endl;
    }
}
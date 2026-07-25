#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        //input
        long long a,b,c,d;
        cin >> a >> b >> c >> d;

        //logic
        if(d<b){
            cout<<-1<<"\n";
            continue;
        }
        int moves=d-b;
        a+=moves;
        if((a<c)){
            cout<<-1<<"\n";
            continue;
        }
        moves+=(a-c);
        cout<<moves<<"\n";
    }
}
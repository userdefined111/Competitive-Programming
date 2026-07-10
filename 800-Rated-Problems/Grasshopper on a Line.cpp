#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        //input
        long long x, k;
        cin >> x >> k;

        // logic here
        if(x%k==0){
            cout<<"2\n";
            cout<<"1 "<<x-1<<endl;
        }
        else{
            cout<<"1 "<<endl;
            cout<<x<<endl;
        }
    }
}
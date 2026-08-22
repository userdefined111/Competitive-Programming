#include <bits/stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        //Inputs
        long long n;
        cin>>n;
        
        //logic
        long long ans=0;
        for(int i=1;i<=60;i++){
            if(n%i==0){ans=i;}
            else{break;}
        }
        cout<<ans<<'\n';
    }
    return 0;
}
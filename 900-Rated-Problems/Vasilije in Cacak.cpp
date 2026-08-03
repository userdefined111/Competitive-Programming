#include <bits\stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        //Inputs
        long long n,k,x;
        cin>>n>>k>>x;

        //Logic
        long long smallestsum=k*(k+1)/2;
        long long largestsum=n*(n+1)/2-(n-k)*(n-k+1)/2;
        if(x>=smallestsum && x<=largestsum){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
}
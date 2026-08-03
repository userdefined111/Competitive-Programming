#include <bits\stdc++.h>
using namespace std;

int main (){
    int t;
    cin>>t;
    while(t--){
        //Inputs
        long long a,b,n;
        cin>>a>>b>>n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        //Logic
        long long maxtime=b;
        for(int i=0;i<n;i++){
            maxtime+=min(arr[i],a-1);
        }
        cout<<maxtime<<"\n";
    }
}
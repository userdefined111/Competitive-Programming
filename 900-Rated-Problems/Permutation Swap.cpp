#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        //inputs
        long long n, q;
        cin>>n>>q;
        vector<int> a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0;i<q;i++){
            long long l, r, k;
            cin>>l>>r>>k;
        }

        //logic
        long long sum = 0;
        for(int i=0; i<n; i++){
            sum += a[i];
        }
        
        
    }
}
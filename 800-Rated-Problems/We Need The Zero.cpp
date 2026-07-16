#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        //input
        long long n;
        cin >> n;
        vector<long long> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }

        //Logic
        long long total_xor=0;
        for(int i=0;i<n;i++){
            total_xor^=arr[i];
        }
        if(n%2!=0){
            cout<<total_xor<<"\n";
        }
        else{
            if(total_xor==0){
                cout<<total_xor<<"\n";
            }
            else{
                cout<<-1<<"\n";
            }
        }
    }
    return 0;
}
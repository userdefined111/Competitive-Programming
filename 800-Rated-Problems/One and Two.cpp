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

        //logic
        int currtwo=0;
        int totaltwo=0;
        for(int i=0;i<n;i++){
            if(arr[i]==2){
                totaltwo++;
            }
        }
        long long ans=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==2){
                currtwo++;
            }
            if((currtwo)==(totaltwo-currtwo)){
            ans=i+1;
            break;
            }
        }
        cout<< ans << endl;
    }
    return 0;
}
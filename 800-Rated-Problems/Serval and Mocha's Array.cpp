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
        int flag = 0;
        for(int i=0;i<n-1;i++){
            for(int j=1;j<n;j++){
                if (__gcd(arr[i], arr[j]) <= 2)
                {
                    flag = 1;
                }
            }
        }
        if(flag==1){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"NO"<<"\n";
        }
    }
    return 0;
}
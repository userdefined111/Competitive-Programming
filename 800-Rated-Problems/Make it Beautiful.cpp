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
        sort(arr.begin(),arr.end());
        if(arr[0]==arr[n-1]){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
            cout<<arr[n-1]<<" ";
            for(int i=0;i<n-1;i++){
                cout<<arr[i]<<" ";
            }
            cout<<"\n";
        }
    }
    return 0;
}
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
        long long count = 0;
        for(int i=0;i<n-1;i++){
            if(arr[i]%2==arr[i+1]%2){
                count++;
            }
        }
        cout<<count<<"\n";
    }
    return 0;
}
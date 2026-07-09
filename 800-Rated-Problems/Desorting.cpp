#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        //Inputs
        int n;
        cin >> n;
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        // Logic for desorting

        // Check if already not sorted
        bool alreadyNotSorted = false;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > arr[i + 1]) {
                alreadyNotSorted = true;
                break;
            }
        }
        if (alreadyNotSorted) {
            cout << 0 << "\n";
            continue;
        }

        long long ans=LLONG_MAX;
        for(int i=0;i<n-1;i++){
            long long d=arr[i+1]-arr[i];
            long long ops;
            if(d==0) ops=1;
            else ops = (d/2)+1;
            ans=min(ans,ops);
        }
        cout << ans << "\n";
        }
    }
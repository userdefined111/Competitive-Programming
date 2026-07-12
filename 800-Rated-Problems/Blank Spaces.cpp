#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        //input
        long long n;
        cin >> n;
        vector<long long> a(n);
        for(long long i = 0; i < n; i++){
            cin>> a[i];
        }
        
        //Logic
        int count=0;
        int maxlength=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                count=0;
            }
            else{
                count++;
                maxlength = max(maxlength, count);
            }
        }
        cout << maxlength << endl;
    }
}
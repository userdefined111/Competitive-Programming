#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        //input
        int n;
        cin>>n;
        vector<long long> arr(n);
        vector<long long> b,c;
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }

        //logic
        long long maxval=*max_element(arr.begin(),arr.end());
        for(int i=0;i<n;i++){
            if(arr[i]==maxval){
                c.push_back(arr[i]);
            }
            else{
                b.push_back(arr[i]);
            }
        }
        if(b.empty()){
            cout<< -1<<endl;
        }
        else {
            cout<<b.size()<<" "<<c.size()<<endl;
            for(long long it :b){
                cout<<it<<" ";
            }
            cout<<endl;
            for(long long it :c){
                cout<<it<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
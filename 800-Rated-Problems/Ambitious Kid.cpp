#include <bits/stdc++.h>
using namespace std;

int main(){
    //input
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //logic
    int MinOps = INT_MAX;
    for(int i=0;i<n;i++){
        MinOps = min(MinOps, abs(a[i]));
    }
    cout<<MinOps<<endl;
}
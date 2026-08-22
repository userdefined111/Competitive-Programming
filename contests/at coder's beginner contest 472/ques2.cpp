#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int totalsum = 0, currsum = 0;
    int mindiff = INT_MAX;
    for(int i=0;i<n;i++){
        totalsum+=arr[i];
    }
    for(int i=0;i<n-1;i++){
        currsum+=arr[i];
        int prevsum = totalsum - currsum;
        mindiff=min(mindiff, abs(prevsum - currsum));
    }
    cout<<mindiff<<endl;
    return 0;
}
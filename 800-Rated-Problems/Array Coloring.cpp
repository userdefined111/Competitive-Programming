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
        // Logic for array coloring
        vector<int> odd, even;
        for(int i=0;i<n;i++){
            if(arr[i]%2==0){
                even.push_back(arr[i]);
            }
            else{
                odd.push_back(arr[i]);
            }
        }
        if(odd.size()%2==0){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }
}
#include<bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while (t--) {
        long long n; cin>>n;
        string s; cin>>s;
        long long ans=0, count=0;
        
        for (int i=0;i<n;i++){
            if(s[i]=='.'){
                count++;
                if(count==3){
                    ans=2;
                    break;
                }
                else{
                    ans++;
                }
            }
            else{
                count=0;
            }
        }
        cout<<ans<<endl;
    }
}


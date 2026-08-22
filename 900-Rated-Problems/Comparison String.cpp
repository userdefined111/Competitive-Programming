#include <bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        //inputs
        long long n;
        cin>>n;
        string s;
        for(int i=0;i<n;i++){
            char c;
            cin>>c;
            s+=c;
        }

        //logic
        long long maxlen=1;
        long long count=1;
        for(int i=1;i<n;i++){
            if(s[i-1]==s[i]){
                count++;
            }
            else{
                maxlen=max(maxlen,count);
                count=1;
            }
        }
        maxlen=max(maxlen,count);
        cout<<maxlen+1<<endl;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        //input
        string s;
        cin >> s;

        long long len=s.size();
        long long ans=(len-1)*9;
        ans+=(s[0]-'0');
        cout << ans << endl;
    }
    return 0;
}
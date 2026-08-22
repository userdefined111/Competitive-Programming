#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;
    string ans = "";
    for(int i=0; i<s.length(); i++){
        char c = s[i];
        if(c!='A'){
            ans.push_back('.');
        }
        else{
            ans.push_back('A');
        }
    }
    cout<<ans<<endl;
}
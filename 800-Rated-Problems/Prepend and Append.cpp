#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        //input
        long long n;
        cin >> n;
        string s;
        cin >> s;
        int size = n;

        //Logic
        int ptr1=0,ptr2=n-1;
        while(ptr1<=ptr2){
            if(s[ptr1]!=s[ptr2]){
                size-=2;
            }
            else{
                break;
            }
            ptr1++;
            ptr2--;
        }
        cout<<size<<"\n";
    }
}
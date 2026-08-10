#include <bits/stdc++.h>
using namespace std;

int dx[4]={-1,1,-1,1}, dy[4]={-1,-1,1,1};

int main (){
    int t;
    cin>>t;
    while(t--){
        //Inputs
        long long a,b;
        cin>>a>>b;
        long long xk,yk;
        cin>>xk>>yk;
        long long xq,yq;
        cin>>xq>>yq;
        
        //Logic
        set<pair<int,int>>kh,qh;
        for(int i=0;i<4;i++){
            kh.insert({xk+ dx[i]*a, yk+dy[i]*b});
            kh.insert({xk+ dx[i]*b, yk+dy[i]*a});
            qh.insert({xq+ dx[i]*a, yq+dy[i]*b});
            qh.insert({xq+ dx[i]*b, yq+dy[i]*a});
        }
        long long ans=0;
        for(auto pos:kh){
            if(qh.find(pos)!= qh.end())
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    
    int t;cin>>t;
    
    map<ll,ll> mex;
    
    map<ll,bool> visited;

    while(t--){
        char op;  cin>>op;
        ll k;cin>>k;

        if(op=='+'){
            visited[k]=true;
        }
        else{
            ll v=(mex[k])+k;
            while(visited[v]){
                mex[k]=v;
                v+=k;
            }
            cout<<v<<endl;
        }
    }
    return 0;
}

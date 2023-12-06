#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll mod;
long long takat(long long a,long long b){
    long long c=1;
    while(b>0){
        if(b&1) c=(c*a)%mod;
        a=(a*a)%mod;
        b/=2;
    }
    return c;
}
ll n,t,m,d;
ll arr[1000000];
int main(){
    ll mod=1e9+7;
    cin>>t;
    while(t--){
        cin>>n>>m>>d;
        ll a=0,s=0;
        multiset<ll> m1;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]>0){
                m1.insert(arr[i]);
                s+=arr[i];
                if(m1.size()>m){
                    s-=*m1.begin();
                    m1.erase(m1.begin());
                }
            }
            a=max(a,s-(i+1)*d);
        }
        cout<<a<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
     int n;
    cin>>n;
    int a[n];
    int b[n];
    for(ll i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<ll>());
    ll N = n;
    N /= 2;
    if(n & 1)N++;
    for(ll i=0; i<N; i++){
        b[i] = a[i];
    }
    sort(a,a+n);
    vector<ll>v;
    for(int i=0; i<N; i++){
        v.push_back(b[i]);
        if((n & 1) && (i+1 == N)){
            continue;
        }
        v.push_back(a[i]);
    }
    cout<<N-1<<endl;
    for(ll i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;
  
    return 0;
}
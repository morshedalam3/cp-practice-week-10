#include <bits/stdc++.h>
using namespace std;
#define ll long long 

int main(){
        int t;
        cin>>t;
        while (t--)
        {
           int n,q;
        cin>>n>>q;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll curr=a[0];
        ll total=0;
        int flip=0;
        for(int i=1;i<n;i++){
            if(flip==0){
                if(a[i]>a[i-1])
                    curr=a[i];
                else{
                    total+=a[i-1];
                    curr=a[i];
                    flip=1;
                }
            }
            else{
                if(a[i]<a[i-1])
                    curr=a[i];
                else{
                    total-=a[i-1];
                    curr=a[i];
                    flip=0;
                }
            }
        }
        if(flip==0)
            total+=a[n-1];
        cout<<total<<endl;
        }
        
        return 0;
    }
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;cin>>t;
     while(t--){
        int n;cin>>n;
        vector<int> a(n);
        set<int> s;
        for(int i=0;i<n;i++){
            cin>>a[i];
            s.insert(a[i]);
        }
 
        if(n==1){
            cout<<1<<endl;
            continue;
        }
 
        if(s.size()!=2){
            cout<<n<<endl;
        }
        else{
            cout<<(((n-2)/2)+2)<<endl;
        }
    }  
    return 0;
}
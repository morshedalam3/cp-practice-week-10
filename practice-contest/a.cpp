#include<bits/stdc++.h>
using namespace std;
int main(){
     int n;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
     sort(arr, arr + n);
    int res = arr[n-2] - arr[0];
    res = min(res,(arr[n-1] - arr[1]) );
    cout<<res<<endl;  
    return 0;
}
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
         ll type, mid, midCr;
         cin>>type;
         ll high = 2e9, low = 1;
         while(high - low > 1) {
            mid = low+(high-low)/2;
            midCr = (mid*(mid-1))/2;
            if(midCr <= type)
                low = mid;
            else
                high = mid;
         }
         ll lowCr = (low*(low-1))/2;
         ll bal = type - lowCr;
         cout<<low+bal<<endl;
    }       
    return 0;
}
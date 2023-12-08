#include<bits/stdc++.h>
using namespace std;


int main() {
   int t = 1; cin >> t;  
   while(t--){
      int n;cin>>n;
      vector<int> superSetOf[n+1]; 
      for(int i = 1; i < n+1; i++){
         string row; cin >> row;
       for(int j = 1; j < n+1; j++){
            if(row[j-1] == '1'){
               superSetOf[j].push_back(i);               
            }
         }
      }
      set<int> setValues[n+1];
      int currentValueForNewSet = 1, findSetWithSize = 0;
      while(currentValueForNewSet != n + 1){
         for(int i = 1; i < n+1; i++){
            if(superSetOf[i].size() == findSetWithSize){
               setValues[i].insert(currentValueForNewSet++);
            for(int set: superSetOf[i]){
               setValues[i].insert(setValues[set].begin(), setValues[set].end());
               }
            }
         }
         findSetWithSize++;
      }
       for(int i = 1; i < n+1; i++){
         cout << setValues[i].size() << ' ';
         for(int val: setValues[i]) cout << val << ' ';
         cout << '\n';
      }
   }
   return 0;
}
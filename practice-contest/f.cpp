#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,k;
    cin>>n>>k;
    string s;
    cin>>s;

    for(char i='a'; i<='z'; i++)
    {
        if (k == 0)
            break;

        for (int j=0; j<n; j++)
        {
            if (k == 0)
                break;

            if (s[j] == i)
            {
                s[j] = ' ';
                --k;
            }
        }
    }
     for (int i=0; i<n; i++)
    {
        if (isspace(s[i]))
            continue;

        cout<<s[i];
    }

    cout<<endl; 
    return 0;
}
#include<bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
	int n;
	cin>>n;
	vector<int> a(n);
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a.begin(),a.end());
	vector<int> ans;
	int add=n/2;
	for(int i=0;i<add;i++)
	{
		ans.emplace_back(a[add+i]);
		ans.emplace_back(a[i]);
	}
	if(n&1) ans.emplace_back(a[n-1]);
	int total=0;
	for(int i=1;i<n-1;i++)
	{
		if(ans[i-1]>ans[i] && ans[i+1]>ans[i])
		{
			total++;
		}
	}
	cout<<total<<endl;
	for(auto x: ans) cout<<x<<" ";
	cout<<endl;
    return 0;
}

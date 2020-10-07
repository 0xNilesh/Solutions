#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007

using namespace std;
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n;
		cin>>n;
		string a,b;
		cin>>a>>b;
		vector<int>ans;
		for(int i=0;i<a.size();i++)
		{
			if(a[i]!=b[i])
			{
				ans.pb(i+1);
				ans.pb(1);
				ans.pb(i+1);
			}
		}

		cout<<ans.size()<<" ";
		for(int i=0;i<ans.size();i++)
			cout<<ans[i]<<" ";
		cout<<"\n";
	}
	return 0;
}
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
		ll ans=0;
		if(n%4==0)
			ans=n/4;
		else
			ans=n/4+1;

		string x;
		for(int i=0;i<n-ans;i++)
			x.pb('9');
		while(ans)
		{
			x.pb('8');
			ans--;
		}
		cout<<x<<"\n";
	}
	return 0;
}
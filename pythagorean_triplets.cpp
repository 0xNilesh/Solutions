#include<bits/stdc++.h>
using namespace std;
int main()
{
		long long a;
		cin>>a;
		if(a==1||a==2)
			cout<<"-1\n";
		else
		{
			if(a%2==0)
				cout<<a*a/4-1<<" "<<a*a/4+1<<"\n";
			else
				cout<<(a*a-1)/2<<" "<<(a*a+1)/2<<"\n";
		}
	return 0;
}
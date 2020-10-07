#include<bits/stdc++.h>
# define mp make_pair
# define pb push_back
# define pp pair<int,int>
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define M 1000000007
using namespace std;
ll cal(ll n,ll power)
{
    ll res=1;
    while(power)
    {
        if(power%2)
        {
            res = (res*n)%M;
        }
        n = (n*n)%M;
        power/=2;
    }
    return res;
}
int main()
{
    fast
    string s;
    cin>>s;
    ll ans=0;
    vector<ll>A;
    vector<ll>B(s.size(),0);
    ll q=0;
    for(int i=0;i<s.size();i++)
    {
        q=q*10+(s[i]-'0');
        q=q%M;
        A.pb(q);
    }
    q=s[s.size()-1]-'0';
    B[s.size()-1]=q;
    for(int i=s.size()-2;i>=0;i--)
    {
        q=(q%M+((A[i]-'0')*10)%M)%M;
        B[i]=q;;
    }
    for(int i=0;i<s.size();i++)
    {
        
        for(int j=i;j<s.size();j++)
        {
            ll temp=0;
            if(i-1>=0)
                temp=A[i]*(cal(10,s.size()-j-1))%M;
            temp+=A[i] + A[j+1]%M;
            ans+=temp;
        }
    }
    cout<<ans<<"\n";
    return 0;
}

#include<iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int x,y,a,b,res,maxi,mini;
        cin>>x>>y>>a>>b;
        if(x==y)
        {
            res=min(x*b,x*2*a);
            cout<<res<<"\n";
            continue;
        }
        maxi=max(x,y);
        mini=min(x,y);
        res=(maxi-mini)*a + min(mini*b,mini*a*2);
        cout<<res<<"\n";
    }
}

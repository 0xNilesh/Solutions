#include<iostream>
#include<cmath>
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float x,n,m;
        cin>>x>>n>>m;
        if(x-(m*10)<=0)
        {
            cout<<"YES"<<"\n";
            continue;
        }
        while(n-- && x>0)
            x = floor(x/2)+10;
        x-= m*10;
        if(x>0)
            cout<<"NO"<<"\n";
        else
            cout<<"YES"<<"\n";
    }
}

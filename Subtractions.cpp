#include<iostream>
 
using namespace std;
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int a,b,total=0,mini,maxi,num;  //mini : minimum, maxi : maximum
        cin>>a>>b;
        mini=min(a,b);
        maxi=max(a,b);
        while(mini!=0)
        {
            num=maxi/mini;
            total+=num;
            maxi-=num*mini;
            if(maxi<mini)
                swap(maxi,mini);
        }
        cout<<total<<"\n";
    }
}

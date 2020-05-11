#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    bool all=true; //all checks if all ranked scores are positive or not
    cin>>n;
    int ar[n]={0};
    int x,y,winx,winy;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        cin>>winx;
        ar[winx-1]=1;
    }
    cin>>y;
    for(int i=0;i<y;i++)
    {
        cin>>winy;
        ar[winy-1]=1;
    }
    for(int i=0;i<n;i++)
    {
        if(ar[i]==0)
        {
            all=false;
            break;
        }
    }
    if(all)
        cout<<"I become the guy.";
    else
        cout<<"Oh, my keyboard!";
}

#include<iostream>
 
using namespace std;
 
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int ar[n]={0},I=0,J=0,total=0;
    for(int i=0;i<n;i++)
    {
        int num_of_sub=0,I=0,J=0;
        for(int j=i;j<n;j++)
        {
            if(s[j]=='U')
                J++;
            else if(s[j]=='D')
                J--;
            else if(s[j]=='R')
                I++;
            else if(s[j]=='L')
                I--;
            if(I==0 && J==0)
                num_of_sub++;
        }
        ar[i]=num_of_sub;
    }
    for(int i=0;i<n;i++)
        total+=ar[i];
    cout<<total;
}

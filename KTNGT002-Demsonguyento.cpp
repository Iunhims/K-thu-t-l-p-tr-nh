#include <iostream>

using namespace std;
int t,l,r;
int dd[1000005]={0};

void sangnt()
{
    dd[0]=dd[1]=1;
    for(int i=2;i<=1000;i++)
        if(dd[i]==0)
    {
        for(int j=i*i;j<=1000000;j+=i)dd[j]=1;
    }
}
int main()
{
    cin>>t;
    sangnt();
    while(t--)
    {
        cin>>l>>r;
        int Count=0;
        for(int i=l;i<=r;i++)
            if(dd[i]==0)Count++;
        cout<<Count<<"\n";
    }
    return 0;
}

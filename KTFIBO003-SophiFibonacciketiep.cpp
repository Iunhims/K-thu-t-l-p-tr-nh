#include <iostream>
using namespace std;

int t,n;
long long F[1000005];

int main()
{
    cin>>t;
    while(t--)
    {
        cin>>n;
        F[0]=0;F[1]=1;
        for(int i=2;i++;)
        {
            F[i]=F[i-1]+F[i-2];
            if(F[i]-n>1){ cout<<n+1<<"\n"; break;}
            else if(F[i]>n){cout<<F[i]+1<<"\n";break;}
        }

    }
    return 0;
}

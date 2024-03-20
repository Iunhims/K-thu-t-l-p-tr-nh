#include <bits/stdc++.h>
using namespace std;
int main()
{
    int sotest;
    cin>>sotest;
    while(sotest>0)
    {
    sotest--;
    long long x,y,z;
    int dem=0,so=0;
    cin>>x>>y>>z;
    while(z>=x)
     {
       so=so+z/x;
       dem=dem+z/x;
       z=z%x;
       while(so>=y)
        {
          dem=dem+so/y;
          so=so/y+so%y;
        }
     }
    cout<<dem<<endl;
    }
    return 0;
}

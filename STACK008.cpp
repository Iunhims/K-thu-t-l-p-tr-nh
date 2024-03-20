#include <bits/stdc++.h>
using namespace std;
int main()
{
    long sotest;
    cin>>sotest;
    while(sotest>0)
    {
        sotest--;
        string s;
        stack<char> n;
        cin>>s;
        for (int i=0;i<s.length();i++)
         if (n.empty()==1) n.push(s[i]);
         else
         {
          if (s[i]=='(') n.push(s[i]);
          else {if (n.top()=='(') n.pop(); else n.push(s[i]);}
         }
        cout<<n.size()<<endl;
    }
    return 0;
}

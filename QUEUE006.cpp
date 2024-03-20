#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
using namespace std;

int chuyen(string &st)
{
    int ans=0;
    for(int i=0;i<st.size();i++)
        if(st[i]!='-')ans=ans*10+st[i]-'0';
    if(st[0]=='-')return -ans;
    return ans;
}
void tach(vector <int> &a, string s)
{
    s+=',';
    int t=0,i=0;
    while(i<s.size())
    {
        if(s[i]==',')
        {
            string temp="";
            for(int j=t;j<i;j++)temp+=s[j];

            a.push_back(chuyen(temp));
            t=i+1;
        }
        i++;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        int k;
        cin>>s>>k;
        vector <int> a;
        tach(a,s);
        for(int i=0;i<=a.size()-k;i++)
        {
            int Max=-1e5;
            for(int j=i;j<i+k;j++)Max=max(a[j],Max);
            cout<<Max;
            if(i!=a.size()-k)cout<<',';
        }
        cout<<'\n';
    }
    return 0;
}

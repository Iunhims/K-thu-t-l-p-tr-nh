#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
bool check(ll a[], int n){
    ll d = a[1] - a[0];
    for(int i=2; i<n; i++)
    {
        if(a[i] - a[i-1] != d)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int test;
    cin >> test;
    while(test--){
        int n;
        cin >> n;
        ll a[n];
        for(int i=0; i<n; i++)
        {
            cin >> a[i];
        }
        if(check(a,n)==true)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
    return 0;
}

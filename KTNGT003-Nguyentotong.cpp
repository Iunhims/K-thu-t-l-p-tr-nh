#include<bits/stdc++.h>
using namespace std;
bool snt (long long n)
{
	if (n<=1)
	{ return false;
	}
	if (n<=3)
	{
		return true ;
	}
	if (n%2==0|| n%3==0)
	{
		return false ;
	}
	for (long long i=5 ;i*i<=n;i+=6)
	  {
	  	if (n%i==0|| n%(i+2)==0)
	  	{
	  		return false ;
		  }
	  }
	  return true;
}
long long tach(long long n)
{
	if (n%2==0){
		n++;
	}
	while(true){
		if (snt(n)&& snt(n-2))
		{
			
			return n;
		}
		n+=2;
	}
}
int main ()
{
	int t;
	cin >> t;
	while(t--){
		long long n;
		cin >> n;
		cout << tach(n) << endl;
	}
	return 0;
}

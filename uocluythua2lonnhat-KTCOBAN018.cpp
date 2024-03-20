#include<bits/stdc++.h>

using namespace std;

typedef long long ll;

ll result(ll n){
	ll i =2 , count = 0;
	while(n/i>=1){
		count +=n/i;
		i*=2;
		
	}
	return count;
	
}
int main(){
	int test;
	cin >> test;
	while(test--){
		ll n;
		cin >> n;
		cout << result(n) << endl;
		
	}
	return 0;
	
}

#include<iostream>
#include<cstring>
#define ll long long
const ll MOD = 1e9+7;

using namespace std;
ll bds (ll n){
	ll a[n + 3];
	memset(a, 0, sizeof(a));
	a[0] = 1;
	for (ll k = n; k>= 1; k--){
		for (ll i = 0; i<=n; i++){
			if (i > k-1 )a[i] = a [i]+ a[i-k];
			a [i]%= MOD;
			
		}
	}
	return a[n]-1;
	

}
int main(){
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll res = bds(n);
		cout << res << endl;
	}
}

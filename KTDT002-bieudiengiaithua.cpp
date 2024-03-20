#include <bits/stdc++.h>
using namespace std;
const int MAX = 50002;

vector<int> primes;
void sieve(){
	bool isPrime[MAX];
	memset(isPrime, true, sizeof(isPrime));
	for(int p = 2; p * p < MAX; p++){
		if (isPrime[p] == true){
			for (int i = p * 2; i < MAX; i += p)
				isPrime[i] = false;
		}
	}
	for (int p = 2; p < MAX; p++)
		if (isPrime[p])
			primes.push_back(p);
}

long long  power(long long x, long long  y){
	long long  count = 0;
	long long  z = y;
	while (x >= z){
		count += (x / z);
		z *= y;
	}
	return count;
}

long long  mul(long long  a, long long b, long long  mod){
	long long  res = 0;
	a = a % mod;
	while(b > 0){
		if(b % 2 == 1)
			res = (res + a) % mod;
		a = (a * 2) % mod;
		b /= 2;
	}
	return res % mod;
}

long long  countWays(long long  n, long long m){
	long long  ans = 1;
	for (int i = 1; i < primes.size(); i++){
		long long  powers = power(n, primes[i]);
		if (powers == 0)
			break;
		ans = mul(ans, powers + 1, m) % m;
	}
	if(((ans - 1) % m) < 0)
		return (ans - 1 + m) % m;
	else
		return (ans - 1) % m;
}

int main(){
	sieve();
	int t;
	cin >> t;
	while(t--){
		long long  n, m;
		cin >> n >> m;
		cout << countWays(n, m) << endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

long long sum (long long n){
	long long terms = (n+1)/ 2;
	long long summ = terms * terms;
	return summ;
}

long long sumle (long long l, long long r){
	return sum(r) - sum(l-1);
}

int main (){
	int t;
	cin >> t;
	while (t--){
		long long l,r;
		cin >> l >> r;
		cout << sumle(l,r) << endl;
	}
	return 0;
}

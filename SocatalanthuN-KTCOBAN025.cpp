#include<bits/stdc++.h>
using namespace std;
int main(){
	long long a[100] = {0};
	a[0] = 1;
	for(int i=0; i<=31; i++){
		for(int j = 0; j<=i; j++){
			a[i+1] = a[i+1] + a[j] * a[i-j];
		}
	}
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << a[n] << endl;
	}
	return 0;
}

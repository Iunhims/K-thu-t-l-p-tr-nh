#include<bits/stdc++.h>
using namespace std;
long long check(int n){
	long long a[93];
	a[0]=0;
	a[1]=1;
	long long sum=0;
	for(int i=2;i<93;i++){
		a[i]=a[i-1]+a[i-2];
	}
	for(int i=0;i<93;i++){
		if(a[i]<=n && a[i]%2==0) sum+=a[i];
	}
	return sum;
}

int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		cout << check(n) << endl;
	}
}

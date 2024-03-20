#include <bits/stdc++.h>
using namespace std;
#define MAX 10001

int Demuocmin(int n){
	int sobuoc [MAX];		// So buoc bien doi n -> i
	queue <int> Q;
	
	// Khoi tao
	for (int i=0; i<=n; i++) sobuoc[i] = -1;
	Q.push(n);
	sobuoc[n] = 0;
	
	// Lop xu ly
	while (!Q.empty()){
		int x = Q.front();
		Q.pop();
		if (x==1)	break;
		
		// a) neu n chia het cho 2 thi bien doi thanh n/2
		if (x%2==0 && sobuoc [x/2]<0){
			Q.push (x/2);
			sobuoc [x/2] = sobuoc[x]+1;
		}
		// b) neu n chia het cho 3 thi bien doi thanh n/3
		if (x%3==0 && sobuoc[x/3]<0){
			Q.push (x/3);
			sobuoc [x/3] = sobuoc[x]+1;
		}
		
		// c) n bien doi thanh n-1
		if (sobuoc[x-1]<0){
			Q.push (x-1);
			sobuoc [x-1] = sobuoc[x]+1;
		}
	}
	return sobuoc [1];
}

int main (){
	int t;
	cin>>t;
	while (t--){
		int n;
		cin>>n;
		cout<<Demuocmin(n)<<endl;
	}
	return 0;
}

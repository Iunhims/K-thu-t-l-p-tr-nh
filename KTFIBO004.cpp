#include<bits/stdc++.h>
using namespace std;
int main(){
	int t; cin >> t;
	while(t--){
		int n; cin >> n;
		long long a[93];
		a[0]=0;
		a[1]=1;
		for(int i=2;i<93;i++){
			a[i]=a[i-1]+a[i-2];
		}
		int ok=0;
		for(int i=0;i<93;i++){
			for(int j=i+1;j<93;j++){
				if(a[i]+a[j]==n){
					ok=1;
					cout << a[i] << " " << a[j]  << endl;
					break;
				}
			}
			if(ok==1) break;
		}
		if(ok==0) cout<<"-1"<<endl;
	}
}

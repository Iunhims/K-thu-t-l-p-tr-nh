#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		long long a[n][m];
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		if(m==1){
			long long sum =0;
			for(int i=0;i<n;i++)
			sum+=a[i][0];
			cout<<sum<<endl;
		}
		else{
		long long k;
		for(int i=1;i<n;i++){
			for(int j=0;j<m;j++){
				if(j==0)
				k = max(a[i-1][j],a[i-1][j+1]);
				else if(j==m-1)
				k = max(a[i-1][j],a[i-1][j-1]);
				else
				 k = max(a[i-1][j],max(a[i-1][j+1],a[i-1][j-1]));
				a[i][j]+=k;
			}
		}
		long long maximum = a[n-1][0];
		for(int i=1;i<m;i++){
			maximum = max(maximum,a[n-1][i]);
		}
		cout<<maximum<<endl;}
	}
}

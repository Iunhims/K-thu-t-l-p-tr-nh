#include <bits/stdc++.h>
using namespace std;
#define MAX 100000
#define MOD 100
 int S[MAX];
 int Sopt = 1;
long long giaithua(int n){
	unsigned long long S=1;
	for(int i=2; i<=n; i++)
	S*=i;
	return S;
}

void Hienthi(int *S, int Sopt){
	for (int i=Sopt-1; i>=0; i--){
		if(i<Sopt-1);
			if(MOD>10 &&  S[i]<10) cout<<"0";
			if(MOD>100 && S[i]<100) cout<<"0";
		cout<<S[i];
	}
	
cout<<endl;
}
void Nhanso(int *S, int &Sopt, int x ){
	int nho = 0;
	for(int i=0; i<Sopt; i++){
		nho = S[i]*x + nho;
		S[i] = nho % MOD;
		nho /=MOD;
	
	}
	while (nho>0){
		S[Sopt] = nho % MOD;
		nho /= MOD;
		Sopt++;
	}
}

void Tinhgiaithua (int n){
	//khoi tao
	Sopt = 1;
	S[0] = 1;
	for (int i=2; i<=n; i++)
	Nhanso(S, Sopt, i);
	Hienthi(S, Sopt);
	
}
int main()
{
	int t; 
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		//
		cout<<giaithua(n)<<endl;
		
		t--;
	}
}

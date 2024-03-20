#include<bits/stdc++.h>

using namespace std;
#define ll unsigned long long

ll tinh(string s,int n){
	ll dec=0;
	for(int i=n-1;i>=0;i--){
		if(s[i]=='1'){
			dec|=(1<<(n-i-1));
		}
	}
	return dec;
}

int main(){
	int t;
    cin>>t;
	while(t--){
		int n;
		string s1,s2;
		cin>>n>>s1>>s2;
		ll sodau=tinh(s1,n);
		ll socuoi=tinh(s2,n);
		ll a=min(sodau,socuoi);
		ll b=max(sodau,socuoi);
		ll x=b-a-1;
		if(b>a){
		cout<<x<<endl;
		}
        if(b==a) cout<<"0\n";
	}
}

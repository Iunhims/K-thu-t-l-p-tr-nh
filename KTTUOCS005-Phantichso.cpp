#include <bits/stdc++.h>
using namespace std;

map<long long, int> mp;
void solve(long long n){
    long long res = 0;
    while(n % 2 == 0){
        res = 1;
        mp[2]++;
        n /= 2;
    }
    for(long long i = 3; i * i <= n; i += 2){
    	if(n % i == 0){
    		res++;
    		while(n % i == 0){
            	mp[i]++;
            	n /= i;
    		}
    	}
	}  
    if(n != 1){
        res++;
        mp[n] = 1;
    }
    cout << res << endl;
    for(auto it : mp){
        cout << it.first << " "<< it.second << endl;
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        long long n;
        cin >> n;
        solve(n);
        mp.clear();
    }
    return 0;
}

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int t, n, k, a[200005], check[200005];
int main(){
	cin >> t;
	while(t--){
	    cin >> n >> k;
	    if(k == 0){
	        for(int i = 1; i <= n; i++){
	        	cout << i << " ";
			}
	        cout << endl;
	        continue;
	    }
	    if(n % 2 != 0 || k > n / 2){
			cout << "-1" << endl; 
			continue;
		}
	    for(int i = 1; i <= n; i++){
			if(i + k > n) break;
	    	if(check[i] == 0){
	      		a[i] = i + k; 
				a[i + k] = i; 
				check[i + k]++; 
				check[i]++;
			}
		}
	    int z = 0;
	    for(int i = 1; i <= n; i++){
	    	if(check[i] != 1){
				z = 1; 
				break;
			}
		}
	    if(z == 0){
			for(int i = 1; i <= n; i++){
	    		cout << a[i] << " ";
	    	}
	    	cout << endl;
		} 
	    else{
	    	cout << "-1" << endl;
		}
	    for(int i = 1; i <= n; i++){
	    	check[i]=0;
		} 
	}
	return 0;
}

#include<iostream>

using namespace std;

long long count(long long n, long long k){
	long long result = 1, j= 1;
	for (long long i= n+ 1; i<= n+ k-1; i++){
		result*= i;
		if (j < k)result/=j++;
		
	}
	return result;
	
}
int main(){
	int t ;
	cin >> t ;
	while (t--){
		long long n, k;
		cin >> n >> k;
		cout << count (n, k) << endl;
	}
}

#include<iostream>

using namespace std;
int len(string str, int n){
	int current_sum = 0;
	int max_sum = 0;
	
	for(int i = 0; i < n; i++){
	current_sum += (str [i] == '0' ? 1 : -1);
	if (current_sum < 0) current_sum = 0;
	max_sum = max (current_sum, max_sum);
	
	}
	return max_sum == 0 ? -1 : max_sum;
	
}
int main (){
	int t ;
	cin >> t ;
	while (t--){
		string a ;
		cin >> a ;
		cout << len(a, a.length()) << endl;
		
	}
	return 0;
	
}

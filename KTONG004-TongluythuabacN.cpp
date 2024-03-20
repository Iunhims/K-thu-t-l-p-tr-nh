#include<bits/stdc++.h>

using namespace std;

int countSubarrays(vector<int>& arr, int n, int x) {
    vector<int> dp(x + 1, 0);
    dp[0] = 1;
    for(int i = 0; i < n; i++){
        for(int j = x; j >= arr[i]; j--){
            dp[j] += dp[j - arr[i]];
        }
    }
    return dp[x];
}

int main(){
	int t;
	cin >> t;
	while(t--){
		int n, x;
	    cin >> n >> x;
	    vector<int> arr;
	    for(int i = 1; i <= n; i++){
	    	if((int)pow(i, x) > n){
	    		break;
			}
			else{
				arr.push_back((int)pow(i, x));
			}
		}
	    cout << countSubarrays(arr, arr.size(), n) << endl;
	}
    return 0;
}

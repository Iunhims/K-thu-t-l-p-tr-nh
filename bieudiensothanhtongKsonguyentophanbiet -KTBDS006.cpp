#include <bits/stdc++.h>
using namespace std;
void snt(vector<int> &sont, int n) { 
    bool check[n+1] = {false};
    for(int i = 2; i <= sqrt(n); i++) {
        if(!check[i]) {
            for(int j = i*i; j <= n; j+= i)
                check[j] = true;
        }
    }
    for(int i = 2; i <= n; i++) {
        if(!check[i]) sont.push_back(i);
    }
}
void result(vector<int> &sont, int &n, int k, int &count, int j = 0, int check = 0) {
    for(int i = j; i <= sont.size() - k; i++) {
        check += sont[i];
        if(check > n) break;
        if(k > 1) result(sont, n, k - 1, count, i + 1, check);
        if(k == 1) {
            if (check == n) count ++;
        }
        check -= sont[i];
    }
}

int main(){
    int test;
    cin>>test;
    while(test--){
        int n, k;
        cin>>n>>k;
        vector<int> sont;
        int count = 0;
        snt(sont, n);
        //cout << result(fibo, n, k) << endl;
        result(sont, n, k, count);
        cout<<count<<endl;
    }
}

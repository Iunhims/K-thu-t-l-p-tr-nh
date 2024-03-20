#include <bits/stdc++.h>
typedef unsigned long long ull;
using namespace std;
ull snt(ull n){
ull prime[n+1], sum = 0;
    memset(prime, 0, sizeof(prime));
    int max = n / 2;
    for (ull p=2; p<=max; p++){
        if (prime[p] == 0){
    for (ull i=p*2; i<=n; i += p)
         prime[i] = p;
}
}
for (ull p=2; p<=n; p++){
    if (prime[p])
        sum += prime[p];
    else
        sum += p;
}
return sum;
}
int main(){
    int t;
    cin>>t;
while(t--){
     ull n; 
     cin>>n;
cout << snt(n)<<endl;
}
return 0;
}

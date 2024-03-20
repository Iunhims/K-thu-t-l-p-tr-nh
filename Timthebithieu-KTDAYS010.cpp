#include<iostream>
#define ll unsigned long long
using namespace std;
int main(){
    int t;
    cin >> t;
    while(t--){
        ll N,L;
        cin >> N >> L;
        ll sum=0;
        for(ll i=1;i<N;i++){
            ll x;
            cin >> x;
            sum+=x;
        }
        ll sum1=(N+L*2-1)*N/2;
        ll res=sum1-sum;
        cout << res << endl;
    }
}

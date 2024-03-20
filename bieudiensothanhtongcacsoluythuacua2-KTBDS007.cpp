#include<iostream>
#include<cmath>
using namespace std;
int dem(int n,int k){
    if(n==0)
        return 1;
    if(k==0)
        return 1;
    if(n>=pow(2,k)){
        int curr_value=pow(2,k);
        return dem(n-
                   curr_value,k)+dem(n,k-1);
    }
    else return dem(n,k-1);
}
int main(){
    int t;
    cin>>t;
    while (t--){
        int n;
        cin>>n;
        int k = log2(n);
        cout << dem(n,k) << endl;
    }
}

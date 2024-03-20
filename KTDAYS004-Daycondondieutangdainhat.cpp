#include<bits/stdc++.h>
using namespace std;
int dayDonDieu(vector<int> a,int n){
    vector<int> L(n,1);
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(a[j]>a[i])
                L[j]=max(L[j], L[i]+1);
        }
    }
    int result = *max_element(L.begin(), L.end());
    return result;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++) cin>>a[i];
       cout<<dayDonDieu(a,n)<<"\n";
    }
}

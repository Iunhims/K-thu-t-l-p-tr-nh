#include<bits/stdc++.h>
using namespace std; 
long long gpf(long long n){
    long long maxprime;
    while(n%2==0){
        maxprime=2; 
        n>>=1;
    } 
    while(n%3==0){ 
        maxprime=3; 
        n/=3;
    }
    for(long i=5;i<=sqrt(n);i+=6){ 
        while(n%i==0){ 
            maxprime=i; 
            n/=i;
        }
        long i2=i+2; 
        while(n%i2==0){ 
            maxprime=i2; 
            n/=i2;
        }
    }
    if(n>4){ 
        maxprime=n; 
    } return maxprime;
}
int main(){ 
    long long t,n; 
    cin>>t; 
    while (t--){
        cin>>n;
        cout<<gpf(n)<<endl; 
    }
    return 0;
}

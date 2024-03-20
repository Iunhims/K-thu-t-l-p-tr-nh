#include <bits/stdc++.h>
using namespace std;
bool check(long long p, long long n) {
     long long tmp = p,count = 0,t = 5;
     while (t <= tmp) {
            count += tmp /t;
            t = t * 5;
}
return (count>= n);
}
long long socuoi(long long n) {
         if (n == 1) return 5;
         long long a = 0;
         long long b = 5 * n;
     while (a<b) {long long c = (a+b)>>1;
         if (check(c, n))
            b = c;
         else a = c + 1;
}
return a;
}
int main() {
    int t; 
    cin>>t;
   while (t--) {
        long long n; 
       cin>>n;
   cout<<socuoi(n)<< endl;
}
return 0;
}

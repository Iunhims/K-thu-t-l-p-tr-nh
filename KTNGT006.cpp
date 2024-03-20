#include<bits/stdc++.h>
using namespace std ;
#define MAX 100001
int gpf[MAX];
void uoc_ngto (){
    memset (gpf, 0, sizeof(gpf));
    gpf[0]=0;
    gpf[1]=1;
    for(int i=2; i< MAX; i++){
        if(gpf[i]>0)
            continue;
        for (int j=i;j<MAX;j+=i){
            gpf[j] = max(i,gpf[j]);
        }
    }
}
int sodacbiet (int n){
    uoc_ngto();
    for (int i=n; i>0; i--){
        if (gpf[i]> sqrt(i))
            return i;
    }
    return -1;
}
int main (){
    int test;
    cin >> test;
    while (test--){
        int n;
        cin >> n;
        cout << sodacbiet(n) << endl;
    }
    return 0;
}

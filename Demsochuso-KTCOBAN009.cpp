#include<bits/stdc++.h>
using namespace std;
int main(){
    int tess; cin >> tess;
    while (tess--){
        string n; cin >> n;
        if (n[0]=='-')
        n.erase(0, 1);
        cout << n.size()<< endl;
        
    }
    return 0;
}

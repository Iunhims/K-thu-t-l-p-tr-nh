#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ull;
#define MAX 1000000000000000001

ull Recursive (ull result, short x, int xcount, short y, int ycount, ull n, int sochuso){
    if (xcount + ycount > sochuso + 2 || result > MAX){
        return MAX;
    }
    if (xcount == ycount && result >= n){
        return result;
    }

    return min(Recursive(result * 10 + x, x, xcount + 1, y, ycount, n, sochuso),
                Recursive(result * 10 + y, x, xcount, y, ycount + 1, n ,sochuso));

}

ull findNumber (ull n, short x, short y){
    int sochuso = floor(log10(n)) + 1; //S? ch? s? c?a n
    ull result = 0; // Sô c?n t?m
    int xcount = 0; // S? ch? s? c?a X
    int ycount = 0; // S? ch? s? c?a Y

    if (x == y){
        while (result < n){
            result = result * 10 + x;
        }
        return result;
    }

    return Recursive(result, x, xcount, y, ycount, n, sochuso);
}

int main (){
    int t;
    cin >> t;
    while (t--){
        ull n;
        cin >> n;
        short x, y;
        cin >> x >> y;
        cout << findNumber(n ,x ,y) << endl;
    }
    return 0;
}

#include<bits/stdc++.h>
#include<vector>
using namespace std;
vector<int>SochinhPhuong;
int Dem_so_cach_bdien(int N, int chiSo){
    if(N==0)return 1;
    if(chiSo<0|| N<0) return 0;
    int dem1 = Dem_so_cach_bdien(N - SochinhPhuong[chiSo], chiSo);
    int dem2 = Dem_so_cach_bdien(N,chiSo -1);
    return dem1 + dem2;
    
}
int main(){
    int t; cin>>t;
    while(t--)
    {
        int N; cin>>N;
        SochinhPhuong.clear();
        for(int i=1; i*i <= N; i++)
        SochinhPhuong.push_back(i*i);
        cout<<Dem_so_cach_bdien(N, SochinhPhuong.size()-1)<<endl;
    }
    return 0;
}

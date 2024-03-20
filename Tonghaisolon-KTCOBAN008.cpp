#include<bits/stdc++.h>

using namespace std;

string sum(string num1, string num2){
    int mem = 0;								
    string res = "";
    int len1 = num1.length();
    int len2 = num2.length();
    int maxLen = max(len1, len2);
    while(num1.length() < maxLen){
        num1 = "0" + num1;
    }
    while(num2.length() < maxLen){
        num2 = "0" + num2;
    }
    for(int i = maxLen - 1; i >= 0; i--){
        int n1 = num1[i] - '0';
        int n2 = num2[i] - '0';
        int sum = n1 + n2 + mem;
        mem = sum / 10;
        sum %= 10;
        res = to_string(sum) + res;
    }
    if(mem > 0){
        res = to_string(mem) + res;
    }
    return res;
}

int main(){
    int t;
    cin >> t;
    cin.ignore();
    while(t--){
    	string s1, s2;
    	cin >> s1 >> s2;
    	cout << sum(s1, s2) << endl;
	}
    return 0;
}

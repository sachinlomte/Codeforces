// https://codeforces.com/problemset/problem/281/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    if(str[0]>=97){
        str[0]=str[0]-32;
    }
    cout << str << "\n";
    return 0;
}
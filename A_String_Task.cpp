// https://codeforces.com/problemset/problem/118/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str;
    cin >> str;
    string ans="";
    int n = str.length();
    for(int i = 0; i < n; i++){
        if(str[i] < 97){
            str[i] += 32;
        }

        if(str[i]=='a' || 
            str[i]=='e' ||
            str[i]=='i' ||
            str[i]=='o' ||
            str[i]=='u' ||
            str[i]=='y')
            str[i]=' ';
    }

    for(int i = 0;i < n;i++)
        if(str[i]!=' ')
            cout << "." << str[i];
    cout << "\n";
}
// https://codeforces.com/problemset/problem/266/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int ans = 0, n;
    cin >> n;
    string str;
    cin >> str;
    char ch = str[0];
    
    for(int i = 1; i < n; i++){
        if(ch==str[i]){
            ans++;
        }
        else{
            ch = str[i];
        }
    }
    cout << ans << "\n";
}
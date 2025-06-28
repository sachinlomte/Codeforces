// https://codeforces.com/problemset/problem/236/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> vi(26, 0);
    string str;
    cin >> str;
    int n = str.length();

    int ans = 0;
    for(int i = 0; i < n; i++){
        vi[str[i]-'a'] = 1;
    }

    for(int i = 0; i < 26; i++){
        if(vi[i])ans++;
    }

    if(ans%2)
        cout << "IGNORE HIM!" << "\n";
    else    
        cout << "CHAT WITH HER!" << "\n";
}
// https://codeforces.com/problemset/problem/339/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    string str1;
    cin >> str1;
    int n = str1.length();
    vector<int> vi;
    for (int i = 0; i < n; i+=2){
        vi.push_back(str1[i]-'0');
    }
    sort(vi.begin(), vi.end());
    string ans ="";
    ans += to_string(vi[0]);
    for(int i = 1; i < vi.size(); i++){
        ans += "+"+to_string(vi[i]);
    }

    cout << ans << "\n";

    return 0;
}
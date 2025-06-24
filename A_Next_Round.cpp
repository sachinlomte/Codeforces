// https://codeforces.com/problemset/problem/158/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k, t, ans = 0;
    cin >> n >> k;
    vector<int> vi(n, 0);
    for(int i = 0; i < n; i++){
        cin >> t;
        vi[i] = t;
    }

    int i = 0;
    while(vi[i]>= vi[k-1] && vi[i]>0 && i < n){
        ans++;
        i++;
    }

    cout << ans << "\n";
    return 0;
}
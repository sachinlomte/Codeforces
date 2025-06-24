// https://codeforces.com/problemset/problem/50/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    int ans = 0;
    cin>> m >> n;
    ans = (n / 2) * m;
    if(n%2!=0)
        ans+=(m/2);
    cout << ans << "\n";
    return 0;
}
// https://codeforces.com/problemset/problem/231/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0, ans = 0;
    int a, b, c;
    cin >> n;
    while(n--){
        cin >> a >> b >> c;
        if(a+b+c > 1) ans++;
    }
    cout << ans << "\n";
    return 0;
}
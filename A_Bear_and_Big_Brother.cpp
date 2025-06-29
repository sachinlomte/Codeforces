// https://codeforces.com/problemset/problem/791/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b, ans = 0;
    cin >> a >> b;
    while(a<=b){
        a=3*a;
        b=2*b;
        ans++;
    }
    cout << ans << "\n";
    return 0;
}
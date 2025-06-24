// https://codeforces.com/problemset/problem/282/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, ans = 0;
    string str1;
    cin >> n;
    while(n--){
        cin >> str1;
        if(str1[1]=='+')
            ans++;
        else    
            ans--;
    }
    cout << ans << "\n";

    return 0;
}
// https://codeforces.com/problemset/problem/4/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    if (((n - 2) % 2 == 0) && (n - 2 > 0))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    puts("");
    return 0;
}
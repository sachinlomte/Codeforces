// https://codeforces.com/problemset/problem/1/A
#include <bits/stdc++.h>
using namespace std;

void check(long long n, long long m, long long a)
{
    long long coveringLength = (n + a - 1) / a;
    long long coveringWidth = (m + a - 1) / a;
    long long result = coveringLength * coveringWidth;
    cout << result << endl;
}

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    check(n, m, a);
    return 0;
}
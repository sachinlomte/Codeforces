// https://codeforces.com/problemset/problem/71/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string str1;
    cin >> n;
    while(n--){
        cin >> str1;
        int len = str1.length();
        if(len <= 10)
            cout << str1 << endl;
        else{
            cout << str1[0] << len-2 << str1[len-1] << endl;
        }
    }
    return 0;
}
// https://codeforces.com/problemset/problem/112/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    
    string str1, str2;
    int num1, num2;
    cin >> str1 >> str2;
    int ans = 0, len1 = str1.length();

    for(int i = 0; i < len1; i++){
        num1 = str1[i];
        num2 = str2[i];
        if(str1[i]>=97)
            num1 = num1-32;
        if(str2[i]>=97)
            num2 = num2-32;

        if(num1 > num2){
            ans = 1;
            break;
        }
        else if(num1 < num2){
            ans = -1;
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}


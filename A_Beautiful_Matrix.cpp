// https://codeforces.com/problemset/problem/263/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int m,n;
    vector<vector<int>> v(5, vector<int>(5,0));
    for(int i = 0; i < 5; i++){
        for(int j = 0; j < 5; j++){
            cin >> v[i][j];
            if(v[i][j]==1){
                m = i;
                n = j;
            }
        }
    }

    cout << abs(2-m)+abs(2-n) << "\n";
    return 0;
}
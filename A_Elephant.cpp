// https://codeforces.com/problemset/problem/617/A
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, ans = 0;
    cin>>n;
    int arr[]={5,4,3,2,1};
    int i = 0;
    
    while(i < 5 && n!=0){
        if(n%arr[i]){
            ans+=n/arr[i];
            n = n%arr[i];
        }
        else{
            ans+=n/arr[i];
            break;
        }
        i++;
    }
    cout << ans << "\n";
}

// Better way to do is count the steps with 5 and + 1 because all next4 points are reachable with allowed steps
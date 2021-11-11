#include <bits/stdc++.h>
using namespace std;

void rec(int i, int a[], int x, int n, bool &ans){
    if(i == n){
        return;
    }
    if(a[i] == x){
        ans = true;
        return;
    }
    i++;
    rec(i, a, x, n, ans);
}


int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    bool ans = false;
    rec(0, a, x, n, ans);
    if(!ans) cout << "No\n";
    else cout << "Yes\n";
}

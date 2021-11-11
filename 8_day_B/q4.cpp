#include <bits/stdc++.h>
using namespace std;

bool rec(int i, int a[], int x, int n){
    if(i == n){
        return false;
    }
    if(a[i] == x){
        return true;
    }
    i++;
    return rec(i, a, x, n);
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
    bool ans = rec(0, a, x, n);
    if(ans) cout << "yes\n";
    else cout << "no\n";
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n + 1];
    int l, r;
    cin >> l >> r;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }  
    // 1st step [1;l)
    for(int i = 1; i < l; i++){
        cout << a[i] << " ";
    }

    // 2nd step (reverse) [r; l]
    for(int i = r; i >= l; i--){
        cout << a[i] << " ";
    }
    // 3rd step  (r; n]
    for(int i = r + 1; i <= n; i++){
        cout << a[i] << " ";
    }
}

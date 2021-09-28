#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, l, r;
    cin >> n >> l >> r;
    long long sum = 0;
    int a[n];
    l--;
    r--;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }    
    for(int i = l; i <= r; i++){
        sum += a[i];
    }
    cout << sum << "\n";
}

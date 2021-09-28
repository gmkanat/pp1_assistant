#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    int a[n];
    for(int i = 0; i < n; i++){
        a[i] = 0;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            a[i] += x;
        }
    }    
    int mn = INT_MAX, mni;
    for(int i = 0; i < n; i++){
        if(mn > a[i]){
            mn = a[i];
            mni = i + 1;
        }
    }
    cout << mni;
}

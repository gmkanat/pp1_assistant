#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;    
    int a[n][m];
    int b[n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        b[i] = 0;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            b[i] += a[i][j];
        }
    }   
    int mn = INT_MAX, mni;

    for(int i = 0; i < n; i++){
        if(mn > b[i]){
            mn = b[i];
            mni = i + 1;
        }
    }
    cout << mni;
}

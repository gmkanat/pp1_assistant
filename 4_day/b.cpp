#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n][n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> a[i][j];
        }
    }    
    // if all elements are equal
    int dif = a[0][0];
    int cnt = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(dif == a[i][j]){
                cnt++;
            }
        }
    }
    if(cnt == n*n){
        cout << 0;
        return 0;
    }
    // first largest number
    int mx = INT_MIN; // ~ -2e9
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mx < a[i][j]){
                mx = a[i][j];
            }
        }
    }
    // mx to min number
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mx == a[i][j]){
                a[i][j] = INT_MIN;
            }
        }
    }
    // find second mx
    int mx2 = INT_MIN;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            if(mx2 < a[i][j]){
                mx2 = a[i][j];
            }
        }
    }
    cout << mx2 << endl;
}


/* 
    
1 2 4 4 5 7 8 8 8 8

1 2 4 4 5 7 0 0 0 0
*/
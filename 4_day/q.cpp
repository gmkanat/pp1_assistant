// Q - problem

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int l = n, r = n;
    char a[n + 1][2*n];
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n - 1; j++){
            if(j >= l && j <= r){
                a[i][j] = '*';
            }
            else a[i][j] = '.';
        }
        l--;
        r++;
    }    
    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= 2*n - 1; j++){
            cout << a[i][j];
        }
        cout << "\n";
    }    
       
}

// 'char'
// "string" 
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n + m][m + n];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }    
    for(int j = 0; j < m; j++){
        int mn = INT_MAX;
        int xi, xj;
        for(int i = 0; i < n; i++){
            if(mn > a[i][j]){
                mn = a[i][j];
                xi = i + 1;
                xj = j + 1;
            }
        }
        cout << xi << " " << xj << " " << mn << "\n";
    }
}

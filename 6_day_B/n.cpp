#include <bits/stdc++.h>
using namespace std;

void Transpose(int n, int m){
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int j = 0; j < m; j++){
        for(int i = 0; i < n; i++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}

int main(){
    int n, m;
    cin >> n >> m;
    Transpose(n, m);
}

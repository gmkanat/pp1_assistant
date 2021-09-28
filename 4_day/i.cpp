#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cin >> a[i][j];
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            int k = sqrt(a[i][j]);
            if(k*k == a[i][j]){
                a[i][j] = sqrt(a[i][j]);
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << a[i][j] << " ";
        }
        cout << "\n";
    }
}


// sqrt(17) = 4  -> 4*4 == 17?
// sqrt(16) = 4  -> 4*4 == 16 !
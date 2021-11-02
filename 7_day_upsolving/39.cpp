#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    int a[n][m];  
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            a[i][j] = 0;
        }
    }  
    int k;
    cin >> k;
    for(int i = 0; i < k; i++){
        int x, y;
        cin >> x >> y;
        a[x][y] = -1;
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == -1){
                continue;
            }
            else{
                if(j - 1 >= 0){
                    if(a[i][j-1] == -1){
                        a[i][j]++;
                    }
                }
                if(i - 1 >= 0){
                    if(a[i - 1][j] == -1){
                        a[i][j]++;
                    }
                }
                if(j - 1 >= 0 && i - 1 >= 0){
                    if(a[i - 1][j - 1] == -1){
                        a[i][j]++;
                    }
                }
                if(i + 1 < n){
                    if(a[i + 1][j] == -1){
                        a[i][j]++;
                    }
                }
                if(j + 1 < m){
                    if(a[i][j + 1] == -1){
                        a[i][j]++;
                    }
                }
                if(i + 1 < n && j + 1 < m){
                    if(a[i + 1][j + 1] == -1){
                        a[i][j]++;
                    }
                }
                if(i + 1 < n && j - 1 >= 0){
                    if(a[i + 1][j - 1] == -1){
                        a[i][j]++;
                    } 
                }
                if(i - 1 >= 0 && j + 1 < m){
                    if(a[i - 1][j + 1] == -1){
                        a[i][j]++;
                    } 
                }
            }
        }
    }
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(a[i][j] == -1){
                cout << "* ";
            }
            if(a[i][j] == 0){
                cout << ". ";
            }
            if(a[i][j] > 0){
                cout << a[i][j] << " ";
            }
        }
        cout << "\n";
    }
}

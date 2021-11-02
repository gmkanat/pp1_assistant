#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int m;
    cin >> m;
    for(int i = 0; i < n; i++){
        int a[m];
        for(int i = 0; i < m; i++){
            cin >> a[i];
        }
        sort(a, a + m);
        if(i % 2 == 0){
            for(int j = 0; j < m; j++){
                cout << a[j] << " ";
            }
        }
        else{
            for(int j = m - 1; j >= 0; j--){
                cout << a[j] << " ";
            }
        }
        cout << "\n";
    }
}


// sort(a, a + n);
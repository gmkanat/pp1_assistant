#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        cout << i << " ";
    }
    cout << "\n";
    for(int i = 1; i < n; i++){
        cout << i << " ";
        for(int j = 1; j < n; j++){
            cout << i*j << " ";
        }
        cout << "\n";
    }    
}

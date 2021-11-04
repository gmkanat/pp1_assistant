#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n/2], c[n/2];
    string b[n/2];  
    for(int i = 0; i < n/2; i++){
        cin >> a[i];
    }
    for(int i = 0; i < n/2; i++){
        cin >> b[i];
    }
    for(int i = 0; i < n/2; i++){
        reverse(b[i].begin(), b[i].end());
        c[n/2 - i - 1] = stoi(b[i]);
    }
    for(int i = 0; i < n/2; i++){
        if(a[i] != c[i]){
            cout << "NO\n";
            return 0;
        }
    }       
    cout << "YES\n";
}


// stoi string to int
// to_string

// preheader
// 
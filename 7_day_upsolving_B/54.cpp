#include <bits/stdc++.h>
using namespace std;

int dcg(int x, int y){
    for(int i = min(x, y); i > 1; i--){
        if(x % i == 0 && y % i == 0){
            return i;
        }
    }
    return 1;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    int mx = 1;
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }            
    for(int i = 0; i < n; i++){
        for(int j = i + 1; j < n; j++){
            if(dcg(a[i], a[j]) > mx){
                mx = dcg(a[i], a[j]);
            }
        }
    }
    cout << mx << "\n";
}


// __gcd - old version 
// gcd - new version
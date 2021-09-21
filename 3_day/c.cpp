#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n];    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    // int mx = INT_MIN;
    int mx = a[0];
    for(int i = 0; i < n; i++){
        if(mx < a[i]){
            mx = a[i];
        }
    }
    cout << mx;
}

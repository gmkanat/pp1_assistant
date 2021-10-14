#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int x){
    for(int i = x - 1; i >= 0; i--){
        cout << a[i] << " ";
    }
    // return ne budet;
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }    
    reverse(a, n);
    
}

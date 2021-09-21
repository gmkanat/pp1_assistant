#include <bits/stdc++.h>
using namespace std;


bool b[100000]; 
int main(){
    int n;
    cin >> n;
    // ? How to check duplicate in sorted array 
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }  
    for(int i = 0; i < n; i++){
        if(b[a[i]] == 0){
            cout << a[i] << " ";
            b[a[i]] = 1;
        }
    }
}

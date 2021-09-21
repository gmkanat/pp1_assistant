#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n + 1];
    int cnt = 0;
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }
    cout << a[0] << endl;
    cout << a[1] << endl;
    for(int i = 1; i <= n; i++){
        if(a[i] % 2 == 1){
            cout << a[i] << " ";
        }
    }
}
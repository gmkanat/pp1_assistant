#include <bits/stdc++.h>
using namespace std;

bool rec(int a[], int x, int i, int n){
    if(i == n){
        return false;
    }
    if(a[i] == x){
        return true;
    }
    i++;
    return rec(a, x, i, n);   
}

int main(){
    int n;
    cin >> n;
    int a[n];
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int x;
    cin >> x;
    bool ok = rec(a, x, 0, n);
    if(ok == true){
        cout << "YES\n";
    }
    else{
        cout << "NO\n";
    }
}


/*

    крайний случай => там где нужно остановить рекурсию 
    


 */

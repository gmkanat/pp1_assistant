#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 2; i <= n; i++){
        bool ok = true;
        for(int j = 2; j <= sqrt(i); j++){
            if(i % j == 0){
                ok = false;
            }
        }
        if(ok){
            cout << i << "\n";
        }
    }    
}


/*
 true = 1;
 false = 0;
if(a == 0){
    cout << 'fdasf';
}
if(!a){
    cout;
}

if(a){
    cout
}
if(a != 0){
    cout 
}


10^8 operations in 1 sec.

*/
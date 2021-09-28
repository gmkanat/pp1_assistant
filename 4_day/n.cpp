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
                break;
            }
        }
        if(ok == true){
            cout << i << " is prime\n";
        }
    }    
}
// O(n*n) doesn't work

// prime or not.

// time limit exceeded TLE
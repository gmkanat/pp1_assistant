#include <bits/stdc++.h>
using namespace std;

int main(){
    // check number if is it pow of 2
    int n;
    cin >> n;
    while(n > 0){
        if(n % 2 == 0){
            n /= 2;
        }
        else break;
    }    
    if(n == 1){
        cout << "YES\n";
    }
    else cout << "NO\n";
}

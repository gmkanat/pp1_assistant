#include <bits/stdc++.h>
using namespace std;

int main(){
    bool prime = true;
    int n;
    cin >> n;
    for(int i = 2; i < n; i++){
        if(n % i == 0){
            prime = false;
        }
    }    
    if(prime == false){
        cout << "No\n";
    }
    else cout << "Yes\n";
}
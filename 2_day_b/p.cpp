#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    bool ok = false;
    for(int i = 1; i < 1000000*4; i++){
        int s = i*i;
        if(i*i == n){
            ok = true;
        }
    }
    if(ok == true){
        cout << "Yes\n";
    }
    else cout << "No\n";
}

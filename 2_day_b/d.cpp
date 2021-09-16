#include <bits/stdc++.h>
using namespace std;

int main(){
    float n, k;
    cin >> n >> k;
    if(n < k){
        cout << 2 << endl;
    }
    else cout << ceil(2*n/k);
}

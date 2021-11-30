#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> v(n), c(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
        c[i] = v[i];
    }
    sort(c.begin(), c.end());
    next_permutation(v.begin(), v.end());
    bool ok = 1;
    for(int i = 0; i < n; i++){
        if(v[i] != c[i]){
            ok = 0;
        }
    }
    if(ok == 0){
        
    }
}


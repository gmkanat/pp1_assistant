#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    map<int,int> mp;
    for(int i = 0; i < n; i++){
        int q; cin >> q;
        mp[q]++;    
    }
    cout << mp[x] << endl; 
}

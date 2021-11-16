#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int, int> cp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        cp[x]++;
    }
    // 2nd method
    for(auto [k, v]: cp){
        cout << k << " " << v << endl;
    }
    int cnt = 0;
    for(auto [k, v]: cp){
        if(v > 1){
            cnt++;
        }
    }
    cout << cnt << endl;
}

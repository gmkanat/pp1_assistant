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
    // 1st method
    
    for(auto &x: cp){
        cout << x.first << " " << x.second << "\n";
    }
    int cnt = 0;
    for(auto &x: cp){
        if(x.second > 1){
            cnt++;
        }
    }
    cout << cnt << endl;
}

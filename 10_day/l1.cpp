#include <bits/stdc++.h>
using namespace std;

int main(){
    map<int,int> mp;
    int n;
    cin >> n;
    for(int i = 0; i < n; i++){
        int x, y;
        cin >> x >> y;
        mp[x + y] = i + 1;
    }

    for(auto &x: mp){
        cout << x.second << endl;
    }
}

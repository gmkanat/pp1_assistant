#include <bits/stdc++.h>
using namespace std;

int main(){
    map<pair<pair<pair<string,int>, string>, int>, bool> mp;
    int n; 
    cin >> n;
    for(int i = 0; i < n; i++){
        string a, b;
        int x, y;
        cin >> a >> x >> b >> y;
        mp[{{{a, x}, b}, y}] = true;
    }
    for(auto x: mp){
        cout << x.first.first.first.first << " and " << x.first.first.second 
        << " " << x.first.first.first.second + x.first.second << endl;
    }
}

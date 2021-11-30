#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string, int>mp;
    int s = 0;
    for(int i = 0; i < n; i++){
        string name; 
        int ball;
        cin >> name >> ball;
        mp[name] += ball;
        s += ball;
    }
    vector<pair<int, string>> v;
    for(auto x: mp){
        v.push_back({x.second, x.first});
    }
    sort(v.rbegin(), v.rend());
    cout << setprecision(6);
    for(auto x: v){
        cout << x.second << " " << 1.0*x.first/s*100 << "%"<< endl;
    }
}

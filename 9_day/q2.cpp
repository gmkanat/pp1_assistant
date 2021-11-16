#include <bits/stdc++.h>
using namespace std;


int main(){
    // pair<int, int> p = {1, 2};
    // int x = 3;
    // cout << p.first << endl;
    // cout << p.second << endl;
    int n; cin >> n;
    vector<pair<int,int>> v;
    for(int i = 0; i < n; i++){
        int x, y; cin >> x >> y;
        v.push_back(make_pair(y, x));
    }
    // vector<pair<int,int>> v(n);
    // for(int i = 0; i < n; i++){
    //     cin >> v[i].first >> v[i].second;
    // }

    // sort by second
    sort(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i].second << " " << v[i].first << "\n";
    }

}  

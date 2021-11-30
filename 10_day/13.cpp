#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> v(n), c(m);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }
    for(int i = 0; i < m; i++){
        cin >> c[i];
    }
    auto it1 = unique(v.begin(), v.end());
    auto it2 = unique(c.begin(), c.end());

    v.resize(distance(v.begin(), it1));
    c.resize(distance(c.begin(), it2));

    // cout << v.size() << " " << c.size() << endl;
    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " " << c[i] << " ";
    // }
    vector<int> v2(v.size() + c.size());
    for(int i = 0; i < v.size(); i++){
        v2[i*2] = v[i];
    }
    for(int i = 0; i < c.size(); i++){
        v2[i*2 + 1] = c[i];
    }
    auto it3 = unique(v2.begin(), v2.end());
    v2.resize(distance(v2.begin(), it3));

    for(int i = 0; i < v2.size(); i++){
        cout << v2[i] << " ";
    }
    cout << endl;

    // for(int i = 0; i < m; i++){
    //     cout << c[i] << " ";
    // }
    // for(int i = 0; i < v.size() +; i++){
    //     cout << c[i] << " ";
    // }
}

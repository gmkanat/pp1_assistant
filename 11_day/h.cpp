#include <bits/stdc++.h>
using namespace std;

void show(vector<int> v){
    for(auto x: v){
        cout << x << " ";
    }
    cout << endl;
}

int main(){
    int n;
    cin >> n;
    vector<int> v;
    map<int, int> mp;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        if(mp.count(x) == 0){
            v.push_back(x);
        }
        mp[x] = 1;
    }
    do{
        show(v);
    }while(next_permutation(v.begin(), v.end()));
}

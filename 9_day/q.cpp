#include <bits/stdc++.h>
using namespace std;

int main(){
    // sort
    // reverse
    // push_back
    // erase
    // pair<int,int> p;
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i++){
        int x; cin >> x;
        v.push_back(x);
    }    
    // sort(v.rbegin(), v.rend());
    // reverse(v.begin(), v.end());
    for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
        if(v[i] == 9){
            v.erase(v.begin() + i);
            i--;
        }
    }

    // for(int i = 0; i < v.size(); i++){
    //     cout << v[i] << " ";
    // }
    
}



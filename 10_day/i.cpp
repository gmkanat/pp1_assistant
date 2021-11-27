#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,int>mp;
    vector<string> v(n);
    for(int i = 0; i < n; i++){
        cin >> v[i];
    }    
    for(int i = 0; i < n; i++){
        if(mp.count(v[i])){ // mp.count(x) - check if key exists
            cout << "user already exists\n";
        }
        else{
            cout << "new user added\n";
            mp[v[i]] = 1;
        }
    }
}

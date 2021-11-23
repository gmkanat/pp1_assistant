#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    map<string,string> mp;
    for(int i = 0; i < n; i++){
        string a, b;
        cin >> a >> b;
        mp[a] = b;    
    }
    int q;
    cin >> q;
    for(int i = 0; i < q; i++){
        string a, b;
        cin >> a >> b;
        if(mp.count(a)){
            if(mp[a] == b){
                cout << "correct password\n";
            }
            else{
                cout << "password error\n";
            }
        }
        else{
            cout << "login error\n";
        }
    }
}

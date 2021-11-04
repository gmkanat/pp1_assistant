#include <bits/stdc++.h>
using namespace std;

int a[101];

int main(){
    string s;
    getline(cin, s);    
    string t;
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            t += s[i];
        }        
        else{
            a[stoi(t)] = 1;
            t = "";
        }
    }
    int x;
    cin >> x;
    int cnt = 0;
    for(int i = 0; i < 101; i++){
        if(a[i] == 0){
            cnt++;
            if(cnt == x){
                cout << i << "\n";
                return 0;
            }
        } 
    }
}

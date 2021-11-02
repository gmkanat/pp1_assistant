#include <bits/stdc++.h>
using namespace std;

int main(){

    string t, s;
    cin >> t >> s;
    
    // 1st solution 
    // cout << t.find(s);
    if(t.find(s) >= 0 && t.find(s) < t.size()){
        cout << "YES\n";
    }
    else cout << "NO\n";
    

    // 2nd solution
    for(int i = 0; i < t.size(); i++){
        for(int j = 0; j < t.size(); j++){
            string k = "";
            if(i <= j){
                for(int x = i; x <= j; x++){
                    k += t[x];
                }
            }
            if(k == s){
                cout << "YES\n";
                cout << k <<  " " << t << endl;
                return 0;
            }
        }
    }
    cout << "NO\n";
    
    // 3rd solution - greedy
    int i = 0, j = 0;

    while(j < t.size()){
        if(t[j] == s[i]){
            i++;
            if(i == s.size()){
                cout << "YES\n";
                return 0;
            }
        }
        else{
            j++;
            i = 0;
        }
    }
    cout << "NO\n";
}
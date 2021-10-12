#include <bits/stdc++.h>
using namespace std;


int count(string s){
    int mx = 0;
    int cnt = 0;
    s += 'a';
    for(int i = 0; i < s.size(); i++){
        if(s[i] >= '0' && s[i] <= '9'){
            cnt++;
        }
        else{
            if(mx < cnt){   
                mx = cnt;
            }
            cnt = 0; 
        }
    }
    return mx;
}

int main(){
    string s;
    cin >> s;
    int n;
    cin >> n;
    int k = count(s);
    if(k < n){
        cout << "Not valid\n";
    }
    else cout << "Valid\n";
}

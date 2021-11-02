#include <bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(0); 
    cin.tie(0); 
    string s;
    cin >> s;
    string a[4];
    int j = 0;
    for(int i = 0; i < s.size(); i++){
        if(s[i] != '.'){
            a[j] += s[i];
        }
        else{
            j++;
        }
    }
    
}

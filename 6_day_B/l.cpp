#include <bits/stdc++.h>
using namespace std;

int count_of_digits(string t){
    int mx = 0;
    int cnt = 0;
    t += 'a';
    for(int i = 0; i < t.size(); i++){
        if(t[i] >= '0' && t[i] <= '9'){
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
    int mx = count_of_digits(s);
    if(mx < n){
        cout << "Not valid\n";
    }
    else cout << "Valid\n";
}

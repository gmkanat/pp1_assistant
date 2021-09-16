#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        for(int j = 0; j < s.size(); j++){
            if(s[j] == '0'){
                cnt++;
            }
            
        }
    }
    cout << cnt << "\n";
}

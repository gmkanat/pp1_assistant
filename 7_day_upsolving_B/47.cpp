#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        string s;
        cin >> s;
        if(palindrome(s)){
            cout << s << "\n";
            cnt++;
        }
    }    
    if(cnt == 0){
        cout << "NO\n";
    }
}

#include <bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin >> s;
    int cnt = 0;

    // bruteforce solution
    for(int j = 0; j < s.size(); j++){
        for(int x = 'a'; x <= 'z'; x++){
            string k;
            for(int i = 0; i < s.size(); i++){
                if(j == i){
                    k += x;
                    cnt++;
                }
                k += s[i];
            }   
            string t = k;
            reverse(t.begin(), t.end());
            if(t == k){
                cout << "YES\n";
                return 0;
            }
        }
    }
    // check end
    for(int x = 'a'; x <= 'z'; x++){
        string s1 = s;
        s1 += x;
        string t = s1;
        reverse(t.begin(), t.end());
        if(t == s1){
            cout << "YES\n";
            return 0;
        }
    }
    cout << "NO\n";
}

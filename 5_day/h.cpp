#include <bits/stdc++.h>
using namespace std;

int main(){
    // int a[10];    
    // string s;
    // cin >> s;

    // 1st solution
    // for(int i = 0; i < 10; i++){
    //     a[i] = 0;
    // }
    // int mx = 0;
    // for(int i = 0; i < s.size(); i++){
    //     a[s[i] - '0']++;
    //     if(mx < a[s[i] - '0']){
    //         mx = a[s[i] - '0'];
    //     }
    // }

    // 2nd solution
    int a[10];
    int n;
    cin >> n;
    for(int i = 0; i < 10; i++){
        a[i] = 0;
    }
    int mx = 0;
    while(n > 0){
        int x;
        cin >> x;
        x = n % 10;
        a[x]++;

        mx = max(mx, a[x]);
        n /= 10;
    }
    for(int i = 0; i < 10; i++){
        if(a[i] > 0){
            if(mx != a[i]){
                cout << "NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";

}


/* 
    s[i] - '0';

    similar
    if(mx < a[i]){
        mx = a[i];
    }
    mx = max(mx, a[i]);
*/
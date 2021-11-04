#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[1001];
    for(int i = 0; i < 1001; i++){
        a[i] = 0;
    }
    int x;
    int t;
    while(cin >> x){
        a[x]++;
        t = x;
    }
    a[t]--;
    int cnt = 0;    
    for(int i = 1; i < 1001; i++){
        if(a[i] == 0){
            cnt++;
            if(cnt == t){
                cout << i;
                return 0;
            }
        }
    }
}

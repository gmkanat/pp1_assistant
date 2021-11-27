#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[100001];
    for(int i = 0; i < 100001; i++){
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
    for(int i = 0; i < 100001; i++){
        if(a[i] == 0){
            cnt++;
            if(cnt == t){
                cout << i << "\n";
                return 0;
            }
        }
    }
}
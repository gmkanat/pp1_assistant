#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n], b[n];
    int c[101];
    for(int i = 0; i < 101; i++){
        c[i] = 0;
    }    
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }    
    for(int i = 0; i < n; i++){
        cin >> b[i];
        c[b[i]]++;
    }
    int cnt = 0;
    for(int i = 0; i < n; i++){
        if(c[a[i]] > 0){
            cnt++;
            c[a[i]]--;
        }
    }
    cout << cnt << endl;
}


/* 
O()

*/
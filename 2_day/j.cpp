#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int cnt = 0;
    for(int i = 0; i < n; i++){
        int x;
        cin >> x;
        while(x > 0){
            int k;
            k = x % 10;
            if(k == 0){
                cnt++;
            }

            x = x/10;
        }
    }    
    cout << cnt << "\n";
}

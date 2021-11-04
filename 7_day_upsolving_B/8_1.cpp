#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i <= n; i++){
        int cnt = 0;
        int x = i;
        while(x > 0){
            if(x % 2 == 1){
                cnt += 1;
            }
            x /= 2;
        }
        if(i == n){
            cout << cnt;
        }
        else cout << cnt << ",";
    }
}


/*  
    decimal to binary
    обычное на двоичный

*/ 


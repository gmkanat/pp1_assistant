#include <bits/stdc++.h>
using namespace std;

int main(){
    int x = 1e8 - 1;
    for(int i = 0; i <= x; i++){
        if(i == x){
            cout << i << endl;
        }
    }    
    cerr << "\nTime elapsed: " << 1.0 * clock() / CLOCKS_PER_SEC << " s.\n";
}


// за 1 сек делает где то 10^8;
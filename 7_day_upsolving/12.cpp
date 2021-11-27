#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, d, c, di, ci;
    cin >> d >> c >> n >> di >> ci;    
    long long total = d*100 + c; 
    total = total * n; // total cents to buy sausages

    long long total_ss = di*100 + ci; // total cents in my wallet
    
    if(total > total_ss){ // if sausages more than
        cout << -1 << endl;
    }    
    else{ 
        total = total_ss - total;
        cout << total/100 << " " << total%100;
    }
}


// all to cent => buy => dollar and cent
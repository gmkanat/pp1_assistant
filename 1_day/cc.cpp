#include <bits/stdc++.h>
using namespace std;

int main(){
    int a[4];
    int n;
    cin >> n;
    for(int i = 0; i < 4; i++){
        a[i] = n%2;
        n = n/2;
        cout << i << " " <<  a[i] << " " << n << "\n";
    }
    for(int i = 0; i < 4; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    int s = 0;
    for(int i = 0; i < 4; i++){
        s = s + a[i]*pow(2, 3 - i);
    }
    cout << s << endl;
}



// for(int start = 0; start < end; steps++)
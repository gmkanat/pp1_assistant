#include <bits/stdc++.h>
using namespace std;

double hypo(int a, int b){
    return sqrt(a*a + b*b);
}


int main(){
    int a, b;
    cin >> a >> b;
    cout << setprecision(4) << hypo(a, b);    
}

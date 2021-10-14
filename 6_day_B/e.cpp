#include <bits/stdc++.h>
using namespace std;

float hypo(int a, int b){
    return sqrt(a*a + b*b);
}

int main(){
    int a, b;
    cin >> a >> b;  
    float x = hypo(a, b);
    cout << setprecision(4) << x;    
}

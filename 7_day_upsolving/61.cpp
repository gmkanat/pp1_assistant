#include <bits/stdc++.h>
using namespace std;

double GetPriceQualityRatio(int price, int quality){
    return 1.0*price/quality;
}

int main(){
    int n;
    cin >> n;
    string s;
    double mx = 1e9;
    for(int i = 0; i < n; i++){
        string t;
        int p, q;
        cin >> t >> p >> q;
        double rac = GetPriceQualityRatio(p, q);
        if(mx > rac){
            mx = rac;
            s = t;
        }
    }  
    cout << s << "\n";
}

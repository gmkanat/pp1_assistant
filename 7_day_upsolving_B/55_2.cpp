#include <iostream>

using namespace std;
int main() {
    int f, pr = 0, r, si, k, cnt = 0, q = 0, num;
    string s, t;
    getline(cin, s);
    s += " ";
    f = s.find(" ");
    while (f != string::npos) {
        f = s.find(" ", f + 1);
        pr++;
    }
    int arr[pr];
    for (int i = 0; i < pr; i++) {
        arr[i] = 0;
    }
    for (int i = 0; i < pr; i++) {
        t = "a";
        r = 0;
        si = 1;
        while (int(s[r]) != int(' ')) {
            t += s[r];
            r++;
        }
        t.erase(0, 1);
        s.erase(0, r + 1);
        for (int j = t.size() - 1; j > -1; j--) {
            arr[i] += (int(t[j]) - int('0')) * si;
            si *= 10;
        }
    }
    for(int i = 0; i < pr; i++){
        cout << arr[i] << endl;
    }
    cin >>  num;
    for (int i = 1; i < 101; i++) {
        if (i != arr[q]) {
            cnt++;
        } else {
            q++;
        }
        if (cnt == num) {
            cout<< i<< endl;
            break;
        }
    }
    return 0;
}
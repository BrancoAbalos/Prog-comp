#include <bits/stdc++.h>
using namespace std;

int main() {
    string k;
    int t, c, s;
    s = t = c = 0;
    cin >> k;
    
    for(char r:k) {
        if(r == 'T') {
        t++;
        } else if (r == 'C') {
        c++;
        } else if (r == 'S') {
        s++;
        }
    }
    
    if(s == t && s == c) {
        cout << "YES";
    } else {
        cout << "NO";
    }
}
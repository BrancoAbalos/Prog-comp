//https://codeforces.com/group/Pf5PtyLxbM/contest/666695/problem/M
#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, a, b; cin >> n >> a >> b;

    vector<int> acc(n);
    cin >> acc[0];

    for(int i=1; i<n; i++) {
        int a; cin >> a;
        acc[i] = acc[i-1] + a; 
    }

    int k; cin >> k;
    k--;

    int pos = -1;
    for(int i=0; i<n; i++) {
        if(i != k && acc[i] + a >= b + acc[k]) {
            pos = i;
            break;
        }
    }

    if(pos == -1) {
        cout << "NAO";
    } else {
        cout << "SIM" << endl << pos + 1;
    }
    

    return 0;
}
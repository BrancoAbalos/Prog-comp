#include <bits/stdc++.h>
using namespace std;

main() {
    vector<int> edificios;
    int n,q;
    cin >> n >> q;

    for(int i = 0; i < n; i++) {
        int altura;
        cin >> altura;
        edificios.push_back(altura);
    }

    while(q!=0) {
    bool t; t = true;
    int p, d, m;
    cin >> p >> d >> m;

    if(p>d) {
        int v;
        v = p;
        p = d;
        d = v;
    }
    
    
    for(int i = p-1; i < d-1; i++) {
    
        if(abs(edificios[i] - edificios[i+1])%m != 0) {
            cout << "NO" << endl;
            t = false;
            break;
        }
    }

    if(t) {
    cout << "SI" << endl;
    }
    q--;

    }

}
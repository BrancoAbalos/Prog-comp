#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string, int> palabras;
    int n,m;
    cin >> n;
    for(int i = 0; i < n; i++) {
        map<string, bool> palabrasvistas;
        cin >> m;
        for(int j = 0; j < m; j++) {
            string k;
            cin >> k;
            if(!palabrasvistas[k]) {
                palabrasvistas[k] = true;
                palabras[k]++;
            }
        }
    }

    for (auto par = palabras.rbegin(); par != palabras.rend(); par++) {
        if (par->second == n) {
            cout << par->first << endl;
        }
    }
}

//hoy aprendi que existen los maps, gracias Ferran
//tmbn el tema de rbegin, rend y to eso??? muxa info voy a explotar pero se me weno
//y problemas con pnteros y cosas asi, lo de siempre
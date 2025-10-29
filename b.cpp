#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; 
    cin >> n;
    for(int i = 0; i<n; i++) {
        int m;
        string t, r;
        cin >> m >> t;
        map<char, int> cadenaDesarmada;
        map<char, int> cadenaOriginal;
        
        for(int j = 0; j < m; j++) {
            char piv;
            piv = t[j];
            cadenaDesarmada[piv]++;
        }
        
        cin >> r;
        for(int k = 0; k < m; k++) {
            char piv;
            piv = r[k];
            cadenaOriginal[piv]++;
        }
        
        
        if(cadenaDesarmada == cadenaOriginal) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
        
        
    }
}

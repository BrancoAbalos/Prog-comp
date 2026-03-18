//https://codeforces.com/group/Pf5PtyLxbM/contest/666695/problem/J
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, c, cambios; cambios = 0;
    vector<char> lab;
    cin >> n >> c;
    
    for(int i = 0; i < n; i++) {
        char piv;
        cin >> piv;
        lab.push_back(piv);
    }
    
    for(int i = 0; i < c; i++) {
        
        bool cerrao; cerrao = true;
        
        for(int j = 0; j < n; j++) {
            
            int posEntrada, pivCambio; posEntrada = 0; pivCambio = 0;
            
            if(lab[j] == '#') {
                cerrao = !cerrao;
                posEntrada = j;
                continue;
            }
            
            if(posEntrada != -1 && cerrao == false && cambios < c) {
                if(lab[j] == '.') {
                    pivCambio = j;
                    
                    for(int k = pivCambio; k > posEntrada; k--) {
                        lab[k] = lab[k-1];
                    }
                    
                    lab[posEntrada] = '.';
                    cambios++;
                }
            }
        }
        
    }
    
        for(int m = 0; m < n; m++) {
            cout << lab[m];
        }
    

    return 0;
}
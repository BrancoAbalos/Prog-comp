//https://codeforces.com/group/Pf5PtyLxbM/contest/672013/problem/K
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, sum, maxLocal; cin >> n;
    sum = 0;
    vector<int> valores; 
    vector<int> colores;
    
    for(int i = 0; i < n; i++) {
        int piv; cin >> piv;
        valores.push_back(piv);
    }
    
    for(int i = 0; i < n; i++) {
        int piv; cin >> piv;
        colores.push_back(piv);
    }

    for(int i = 0; i < n; i++) {
        int paridad;
        
        if(i == 0) {
            maxLocal = valores[i];
            paridad = colores[i];
        }
        
        if(colores[i] == paridad) {
            
            if(valores[i] > maxLocal) {
                maxLocal = valores[i];
            }
            
            if(i == n-1) {
                sum += maxLocal;
            }
        }
        
        if(colores[i] != paridad) {
            sum += maxLocal;
            maxLocal = valores[i];
            paridad = colores[i];
            
            if(i == n-1) {
                sum += maxLocal;
            }
        }

    }
    
    cout << sum;
    
    return 0;
}
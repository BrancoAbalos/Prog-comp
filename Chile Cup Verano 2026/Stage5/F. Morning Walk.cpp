//https://codeforces.com/group/Pf5PtyLxbM/contest/669742/problem/F
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    
    int n;
    cin >> n;
    
        for(int i = 0; i < n; i++) {
        int metros, vel, tiempo, amikos;
        cin >> metros >> vel >> tiempo >> amikos;
        
        for(int j = 0; j < amikos; j++) {
            
            if(j > 0) {
                cout << " ";
            }
            
            int encuentro, velAmiko, tiempoModif, totalAmiko, totalIndi, result;
            cin >> encuentro >> velAmiko;
            tiempoModif = tiempo - encuentro;
            totalAmiko = velAmiko * tiempoModif;
            totalIndi = vel * tiempoModif;
            result = (totalIndi-totalAmiko)/metros;
            
            if(result >= 0) {
                cout << result + 1;    
            } else {
                cout << (result*-1) + 1;
            }
        }
        cout << endl;
    }

    return 0;
}
//https://codeforces.com/group/Pf5PtyLxbM/contest/672013/problem/L
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, uxiono, suma; cin >> n;


    for(int i = 1; i < n+1; i++) {
        uxiono = 1;
        suma = 1;
        int piv; cin >> piv;
        
        for(int j = 1; j < piv+1; j++) {
            if(j%2 == 1) {
                uxiono = uxiono + suma;
                continue;
            } else {
                suma = suma*2;
                uxiono = uxiono + suma;
                continue;   
            }  
        }
        
        cout << uxiono << endl;
        
        
    }
    

    return 0;
}
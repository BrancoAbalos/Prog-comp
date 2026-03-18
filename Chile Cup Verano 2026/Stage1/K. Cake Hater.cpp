//https://codeforces.com/group/Pf5PtyLxbM/contest/662604/problem/K
#include <bits/stdc++.h>
using namespace std;
 
int main()
{
    int n, max, cantMalos; 
    cin >> n >> max >> cantMalos;
    set<int> malos;
    
    for(int i = 0; i < cantMalos; i++) {
        int piv;
        cin >> piv;
        malos.insert(piv);
    }
    
    for(int i = 0; i < n; i++) {
        double largo, cont;
        cont = 0;
        cin >> largo; 
        for(int j = 0; j < largo; j++) {
            int piv; 
            cin >> piv;
            if(malos.count(piv)) {
                cont++;    
            }
        }
        
        if(cont > largo/3) {
        cout << i+1 << endl;
        return 0;
        }
    }
    
    cout << -1 << endl;
}
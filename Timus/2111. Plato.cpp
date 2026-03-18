//https://acm.timus.ru/problem.aspx?space=1&num=2111
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, total, costo; cin >> n; total = 0; costo = 0;
    vector<int> caminos;
    for(int i = 0; i < n; i++) {
        int piv; cin >> piv;
        caminos.push_back(piv);
        total += piv;
    }
    
    sort(caminos.begin(), caminos.end());
    
    for(int i = n-1; i >= 0; i--) {
        costo += total*caminos[i];
        total -= caminos[i];
        costo += total*caminos[i];
    }
    
    cout<< costo;

    return 0;
}
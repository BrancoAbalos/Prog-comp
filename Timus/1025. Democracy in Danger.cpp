//https://acm.timus.ru/problem.aspx?space=1&num=1025
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, subN, cont; cin >> n;
    cont = 0;
    vector<int> grupos;
    for(int i = 0; i < n; i++) {
        int piv; cin >> piv;
        grupos.push_back(piv);
    }
    
    sort(grupos.begin(), grupos.end());
    
    subN = (n/2)+1;
    
    for(int i = 0; i < subN; i++) {
        int piv; piv = grupos[i];
        cont += (piv/2)+1;
    }
    
    cout << cont;

    return 0;
}
//https://acm.timus.ru/problem.aspx?space=1&num=1638
#include <bits/stdc++.h>
using namespace std;
//fokin gusano de la libreria

int main()
{
    int tVolumen, tCover, inicio, fin;
    cin >> tVolumen >> tCover >> inicio >> fin;
    
    //caso de prueba 10 1 1 2
    // 
    
    if(inicio > fin) {
        cout << (tCover*((inicio - fin)*2)) + (tVolumen*((inicio - fin)+1));
    } else {
        cout << (tCover*((fin - inicio)*2)) + (tVolumen*((fin - inicio)-1));
    }
    
    return 0;
}
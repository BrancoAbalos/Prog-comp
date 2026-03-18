//https://acm.timus.ru/problem.aspx?space=1&num=1197
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    
    for(int i = 0; i < n; i++) {
        char letra;
        int letraASCII, altura, casos; 
        cin >> letra >> altura;
        letraASCII = letra - 96;
        casos = 0;
        
        if(letraASCII >= 3 && altura >= 2) { // en este caso quiero ver si puede ir a la izquierda y arriba
            casos++;
        }
        
        if(letraASCII >= 3 && altura <= 7) { // en este caso quiero ver si puede ir a la izquierda y abajo
            casos++;
        }
        
        if(letraASCII <= 6 && altura >= 2) { // derecha abajo
            casos++;
        }
        
        if(letraASCII <= 6 && altura <= 7) { // derecha arriba
            casos++;
        }
        
        if(letraASCII >= 2 && altura >= 3) { // arriba e izquierda
            casos++;
        }
        
        if(letraASCII <= 7 && altura >= 3) { // arriba y derecha
            casos++;
        }
        
        if(letraASCII >= 2 && altura <= 6) { // abajo e izquierda
            casos++;
        }
        
        if(letraASCII <= 7 && altura <= 6) { // abajo y derecha
            casos++;
        }
        
        
        cout << casos << endl;
    }
    

    return 0;
}
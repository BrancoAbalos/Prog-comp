//kool string
//tiron de oreja pq taba cmo codigo de progra pero 
//se refactorizo (gracias netle)
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, contador, contadorGlobal;
    string s;
    bool tipo;
    tipo = true;
    contador = 0;
    contadorGlobal = 0;
    cin >> k >> s;
    
    if(k == 2) {
        string s1, s2;
        int c1, c2;
        s1 = s;
        s2 = s;
        c1 = 0;
        c2 = 0;
        
        for(int i = 0; i < s.size(); i++) {
            if(s1[i] == '1' && !tipo) {
                s1[i] = '0';
                c1++;
            } else if (s1[i] == '0' && tipo) {
                s1[i] = '1';
                c1++;
            }
            tipo = !tipo;
        }
        
        tipo = true;
        for(int i = 0; i < s.size(); i++){
            if(s2[i] == '1' && tipo) {
                s2[i] = '0';
                c2++;
            } else if (s2[i] == '0' && !tipo) {
                s2[i] = '1';
                c2++;
            }
            tipo = !tipo;
        }
        
        if(c1 < c2) {
            cout << c1 << " " << s1;
        } else {
            cout << c2 << " " << s2;
        }
        
        return 0;
        
    } else {
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1' && tipo) {
                if(contador == k-1) {
                    if(i+1 < s.size() && s[i+1] == '0') {
                        s[i-1] = '0';
                        contador = 0;
                    } else {
                        s[i] = '0';
                        contador = 1;
                    }
                    tipo = !tipo;
                    contadorGlobal++;
                } else {
                    contador++;
                }
            } else if (s[i] == '0' && !tipo){
                if(contador == k-1) {
                    if(i+1 < s.size() && s[i+1] == '1') {
                        s[i-1] = '1';
                        contador = 0;
                    } else {
                        s[i] = '1';
                        contador = 1;
                    }
                    tipo = !tipo;
                    contadorGlobal++;
                } else {
                    contador++;
                }
            } else {
                contador = 1;
                tipo = !tipo;
            }
        }
        cout << contadorGlobal << " " << s;
    }
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    
    for(int i = 0; i < t; i++) {
        vector<int> array;
        int n, k;
        bool encontrao;
        k = 0;
        encontrao = false;
        cin >> n;
        
        for(int j = 0; j < n; j++) {
            int piv;
            cin >> piv;
            array.push_back(piv);
        }
        
        while(!encontrao) {
            k++;
            for(int elemento : array) {
                if(elemento%k != 1) { //aca ta malo
                    encontrao = true;
                }
            }
        }
        cout << k << endl;
        
    }
}

//voy a tener un array de largo n, debo de ir buscando un numero X 
//que iterando todo el array me de que el maximo comun dividor entre 
//los valores almacenados sea a lo menos 1 en alguno
//en ningun lado dicen que el array esta ordenado, tener ojito cn eso!!
//el valor que debe iterar DA LO MISMO cn el indice, el indice es solo pa recorrer
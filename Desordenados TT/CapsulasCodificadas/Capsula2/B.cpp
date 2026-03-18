//https://codeforces.com/group/vXmuu8BIUj/contests

#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    for(int i = 0; i<n; i++) {
        int cant, temp, menor, posicionMenor;
        menor = 10000000000;
        bool posible;
        posible = true;
        vector<int> vasos;
        cin >> cant;
        
        for(int j = 0; j<cant; j++) {
            cin >> temp;
            if(temp < menor) {
                menor = temp;
                posicionMenor = j;
            }
            vasos.push_back(temp);
        }
        
        for(int k = 0; k<cant-1; k++) {
            if(vasos[k] < vasos[cant-1] && posible){
                posible = false;
                //cout << vasos[k] << " en posicion " << k << " es menor que " << vasos[cant-1] << " en el ciclo " << i << endl;
                //debugeando a manito como dios manda
                break;
            } while(vasos[k] > vasos[posicionMenor] && vasos[k] > vasos[cant-1]){
                vasos[posicionMenor] += 1;
                vasos[k] -= 1;
                for(int l = k; l<cant; l++) {
                    if(vasos[l] < vasos[posicionMenor]) {
                        posicionMenor = l;
                    }
                }
            }
        }

        if(posible) {
            cout << "YES" << endl;
        } else {   
            cout << "NO" << endl;
        }
        //aca termine el rellenado?? y ahora tengo que comparar 
        
        //se compara con el ultimo, para no superarlo
        //luego de eso BUSCA AL MENOR que este disponible y 
        //recien ahi se realiza la suma/resta?

        //lo sigo temprano, quiza un if primero pa sacar altiro el caso que no sea posible (ultimo mayor que primero)
        //yy dps quiza un while vasos[k] > vasos[n-1] para irlo "vaciando" y nivelando
        //cn los demas??? aunque me preocupa la complejidad, se que existen funciones y to eso 
        //pero no quiero depender tanto de ellas, eso branquito del futuro acuerdate de to esto jeje
    }
}
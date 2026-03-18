#include <bits/stdc++.h>
using namespace std;

int transformable(int pivote) {
    
    if(pivote == 2 & pivote == 3 & pivote == 4) {
        return pivote;
    }   
    
    switch (pivote) {
    case 5:
        pivote = 6;
        return pivote;
    case 6:
        pivote = 5;
        return pivote;
    case 8:
        pivote = 9;
        return pivote;
    case 9:
        pivote = 8;
        return pivote;
    }
    
    return pivote;
    
}


int main() {
    bool posible = false;
    int hora1, hora2, min1, min2, pesoHora, pesoMin;
    string texto;
    const vector<int> excluidos = {0, 1, 2, 3, 4, 7};

    cin >> texto;
    hora1 = stoi(texto.substr(0, 1));
    hora2 = stoi(texto.substr(1, 1));
    min1 = stoi(texto.substr(3, 1));
    min2 = stoi(texto.substr(4, 1));
    cin >> pesoHora >> pesoMin;
    
    
    if (find(excluidos.begin(), excluidos.end(), hora2) == excluidos.end() && hora1 < 1) {
        hora2 = transformable(hora2);
        posible = true;
    } else if(find(excluidos.begin(), excluidos.end(), min2) == excluidos.end() && min1 < 6) {
        min2 = transformable(min2);
        posible = true;
    }

    if(posible) {
        cout << "No closest valid time possible";
    } else {
    cout << hora1 << hora2 << ":" << min1 << min2 << endl;
    }
}
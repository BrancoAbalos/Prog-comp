#include <bits/stdc++.h>
using namespace std;

int main() {
    int min, max, requerido;
    cin >> min >> max >> requerido;

    if(min*2 >= requerido && max*2 >= requerido || min*2 <= requerido && max*2 <= requerido) {
        cout << "SI" << endl;
    } else {
        cout << "NO" << endl;
    }
    
}
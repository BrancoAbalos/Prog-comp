#include <bits/stdc++.h>
using namespace std;

int main() {
    double n, resultado, factorial;
    factorial = 1;
    cin >> n;
    
    for(int i = 0; i <= n-2; i++) {
        double pivote, potencia;
        factorial = factorial*(i+1);
        potencia = pow(2, n-2-i);
        pivote = factorial*potencia;
        resultado += pivote;
    }
    
    resultado += pow(2, n-2);
    cout << resultado;
    
    
    // (sumatoria hasta n-2 de)+(2^n)
}
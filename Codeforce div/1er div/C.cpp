#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int aInicial, a, b;
		vector<int> respuestas;
		cin >> aInicial >> b;
		for(int j = 0; j < aInicial; j++) {
            if(a == b) {
                break;
            }
            a = aInicial;
			respuestas.clear();
			for(int k = j; k < aInicial; k++) {
				a = a ^ k;
				if(a == b) {
					break;
				}
			}
		}
		
		for(int numero : respuestas) {
			cout << numero;
		}
	}
}
// ta malo pq lo hago de forma secuencial TODO, quizas si 
// hubiera sacado una logica transformandolos a binario y 
// utilizando el inverso???? lo lograba pero ya queda 
// una hora nma asi que mato, q lata
#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, x;
    x = 0;
    cin >> n;
    
    for(int i = 0; i < n; i++) {
        string cadena;
        cin >> cadena;
        for(int j = 0; j < cadena.size(); j++) {
            if(cadena[j] == '+') {
                x++;
                break;
            } else if(cadena[j] == '-') {
                x--;
                break;
            }
        }
    }
    cout << x;
}
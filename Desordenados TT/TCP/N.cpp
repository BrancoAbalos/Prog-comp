#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    string s;
    bool iniciado;
    iniciado = false;
    cin >> n >> s;

    for(int i = 0; i < n; i++) {
        if(s[i] == 'A' && !iniciado || s[i] == 'T' && !iniciado) {
            iniciado = true;
        } else if (s[i] == 'A' && iniciado || s[i] == 'T' && iniciado) {
            cout << "ganaste" << endl;
            return 0;
        }

        if(iniciado && s[i] == '#') {
            cout << "perdiste" << endl;
            return 0;
        }        
    }
}
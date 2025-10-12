#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    char matriz[n][n];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matriz[i][j];
        }
    }

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(matriz[i][j] == 'T') {

                if((j+2 <n) && matriz[i][j+1] == 'C' && (matriz[i][j+2] == 'P')) {
                    cout << "SI";
                    return 0;
                }

                else if((i+2 <n) && matriz[i+1][j] == 'C' && matriz[i+2][j] == 'P') {
                    cout << "SI";
                    return 0;
                } 
                else if ((i+2 <n) && (j+2 <n) && matriz[i+1][j+1] == 'C' && (j+2 <n) && matriz[i+2][j+2] == 'P') {
                    cout << "SI";
                    return 0;    
                }

            }
        }
    }

    cout << "NO";
}
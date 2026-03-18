#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    for(int i = 0; i<t; i++) {
        int n;
        string piv;
        cin >> n >> piv;
        bool palindromo;
        palindromo = true;
        vector<int> arreglao;
        
        
        for(int j = 0; j < (n/2); j++) {
            if(piv[j] != piv[n-j-1]) {
                palindromo = false;
            }
        }
        
        if(!palindromo) {
            for(int k = 0; k < n; k++) {
                if(piv[k] == '1') {
                    arreglao.push_back(k+1);
                }
            }
        }
        
        if(!palindromo) {
            cout << arreglao.size() << endl;
            for(int piv : arreglao ) {
                cout << piv << " ";
            }
            cout << endl;
        } else if (palindromo) {
            cout << 0 << endl << " " << endl;
        }
    }
}
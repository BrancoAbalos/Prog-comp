#include <bits/stdc++.h>
using namespace std;

int main()
{
    int k, n;
    bool paridad;
    cin >> k >> n;
    
    if(n%2 == 0) {
        paridad = true;
    } else {
        paridad = false;
    }
    
    if(!paridad) {
        if(k == (n/2)){
        for(int i = 0; i < n; i++) {
                if(i%2 == 0) {
                    cout << "-";
                } else {
                    cout << "x";
                }
            }   return 0;
        } else if (k == ((n/2)+1)) {
            for(int i = 0; i < n; i++) {
                if(i%2 == 0) {
                    cout << "x";
                } else {
                    cout << "-";
                }
            } return 0;  
        }
    }   else if (paridad) {
            if(k == (n/2)){
                for(int i = 0; i < n; i++) {
                        if(i%2 == 0) {
                            cout << "x";
                        } else {
                            cout << "-";
                        }
                    }   return 0;    
            } else if (k == ((n/2)-1)) {
                return 0;
            }
    }
    
    
    
    cout << "*" << endl;
}
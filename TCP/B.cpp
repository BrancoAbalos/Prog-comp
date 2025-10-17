#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int largo, casos;
    string ruleta;
    vector<bool> patron;
    cin >> largo >> casos >> ruleta;
    
    for(int i = 0; i < casos; i++) {
        bool isRed;
        string respuesta;
        
        if(i < (casos/10)) {
            cout << "ROJO" << endl;
            cin >> respuesta;
            if(respuesta == "GANASTE") {
                isRed = true;
                patron.push_back(isRed);
            } else {
                isRed = false;
                patron.push_back(isRed);
            }
        } else {
            
            
            //cout << patron[j];
        // 
        //for( <7)
        //patron[i]
        }
        
        
        
    } 
}
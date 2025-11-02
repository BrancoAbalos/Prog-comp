//Me da malo recien el test 19 que no se onde ta malo, me voy a morir de pena 
//en vola deberia revisar las iteraciones pero en teoria funcan bien???? quizas si son datos impares se me muere un
//poquito la parte del /10 weno eso q fokin pena 
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
            std::cout << std::flush;
            cin >> respuesta;
            if(respuesta == "GANASTE") {
                isRed = true;
                patron.push_back(isRed);
            } else {
                isRed = false;
                patron.push_back(isRed);
            }
        } else {
            i--;
            int j;
            j = 0;
            
            while(j < patron.size()) {
                if(patron[j]) {
                    cout << "ROJO" << endl;
                    std::cout << std::flush;                   
                } else {
                    cout << "NEGRO" << endl;
                    std::cout << std::flush;                    
                }
            cin >> respuesta;
            j++;
            i++;
            }    
        }
    } 
}

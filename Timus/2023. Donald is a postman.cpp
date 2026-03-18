//https://acm.timus.ru/problem.aspx?space=1&num=2023
#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<string> cajas = {"Alice", "Ariel", "Aurora", "Phil", "Peter", "Olaf",
        "Phoebus", "Ralph", "Robin", "Bambi", "Belle","Bolt","Mulan","Mowgli","Mickey",
        "Silver", "Simba", "Stitch", "Dumbo","Genie","Jiminy", "Kuzko", "Kida", "Kenai",
        "Tarzan", "Tiana", "Winnie"
    };
    int n, posiEspacial, pasos; cin >> n; pasos = 0; posiEspacial = 1;
    for(int i = 0; i < n; i++) {
        int posi; posi = 0;
        string piv; cin >> piv;
        for(int j = posi; posi < cajas.size(); j++) {
            if(piv == cajas[j]) {
                break;
            }
            posi++;
        }
        
        if(posiEspacial == 1) {
            if(posi > 8 && posi < 18) {
                pasos++;
                posiEspacial = 2;
            } else if (posi >= 18) {
                pasos += 2;
                posiEspacial = 3;
            }
        } else if (posiEspacial == 2) {
            if(posi < 9) {
                pasos++;
                posiEspacial = 1;
            } else if (posi >= 18) {
                pasos++;
                posiEspacial = 3;
            }
        } else {
            if(posi < 9) {
                pasos += 2;
                posiEspacial = 1;
            } else if (posi > 8 && posi < 18) {
                pasos++;
                posiEspacial = 2;
            }
        }
        
    
    }
    
    cout<<pasos;

    return 0;
}
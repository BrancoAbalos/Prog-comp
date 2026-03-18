//https://acm.timus.ru/problem.aspx?space=1&num=1020
#include <bits/stdc++.h>
using namespace std;

int main()
{
    //quiero ir sumando la distancia entre cada 
    //punto, adicionalmente de sumar el perimetro de los clavos que usemos 
    //formula del perimetro P = pi x distancia
    double total, d, baseX, baseY, baseXFinal, baseYFinal; 
    int n; cin >> n >> d;
    total = d*2*acos(-1.0);
    for(int i = 0; i < n; i++) {
        double dif;
        if(i == 0) {
            cin >> baseX >> baseY;
            baseXFinal = baseX;
            baseYFinal = baseY;
        } else {
            double pivX, pivY; cin >> pivX >> pivY;
            if(pivX == baseX) { //aca si tan en el mismo X
                dif = abs(baseY-pivY);
            } else if (pivY == baseY) { //aca si tan en el mismo Y
                dif = abs(baseX-pivX);
            } else {
                dif = sqrt((pow((baseX-pivX), 2.00)) + (pow((baseY-pivY), 2.00)));
            }
            total += dif;
            baseX = pivX; baseY = pivY;
        }
        
        if(i == n-1) {
            if(baseXFinal == baseX) { //aca si tan en el mismo X
                dif = abs(baseY-baseYFinal);
            } else if (baseYFinal == baseY) { //aca si tan en el mismo Y
                dif = abs(baseX-baseXFinal);
            } else {
                dif = sqrt((pow((baseX-baseXFinal), 2.00)) + (pow((baseY-baseYFinal), 2.00)));
            }
            total += dif;
        }
    }
    
    cout << fixed << setprecision(2) << total << endl;

    return 0;
}
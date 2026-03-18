//https://acm.timus.ru/problem.aspx?space=1&num=1585
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, max; cin >> n;
    string pinwinoRepetio;
    map<string, int> pinwinos;
    
    for(int i = 0; i < n; i++) {
        string pivotepinwino, vacio; cin >> pivotepinwino >> vacio;
        pinwinos[pivotepinwino]++;
    }
    
    for(const auto& conteo : pinwinos) {
        if(conteo.second > max) {
            max = conteo.second;
            pinwinoRepetio = conteo.first;
        }
    }
    
    cout << pinwinoRepetio << " Penguin";
    
    

    return 0;
}
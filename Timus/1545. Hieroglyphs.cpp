//https://acm.timus.ru/problem.aspx?space=1&num=1545
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<string> jero;
    for(int i = 0; i < n; i++) {
        string piv; cin >> piv;
        jero.push_back(piv);
    }
    
    char clave; cin >> clave;
    
    for(int i = 0; i < n; i++) {
        string local; local = jero[i];
        if(local[0] == clave) {
            cout << jero[i] << endl;
        }
    }
    

    return 0;
}
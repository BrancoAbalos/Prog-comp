//https://acm.timus.ru/problem.aspx?space=1&num=1563
#include <bits/stdc++.h>
using namespace std;

int main()
{
    string n; getline(cin, n);
    int casos, repeat; casos = stoi(n);
    repeat = 0;
    map<string, int> tiendas;
    
    for(int i = 0; i < casos; i++) {
        string piv; getline (cin, piv);
        tiendas[piv]++;
    }
    
    for(auto ele : tiendas) {
        if( ele.second > 1) {
            repeat += ele.second - 1;
        }
    }
    
    cout << repeat;
    

    return 0;
}
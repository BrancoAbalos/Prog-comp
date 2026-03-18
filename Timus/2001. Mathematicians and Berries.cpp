//https://acm.timus.ru/problem.aspx?space=1&num=2001
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int canastaBase1, canastaBase2, canastaLlena1, canastaVacia2, canastaVacia1, canastaLlena2;
    cin >> canastaBase1 >> canastaBase2 >> canastaLlena1 >> canastaVacia2 >> canastaVacia1 >> canastaLlena2;
    
    cout << canastaBase1-canastaVacia1 << " " << canastaBase2-canastaVacia2 << endl;

    return 0;
}
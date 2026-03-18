//https://acm.timus.ru/problem.aspx?space=1&num=1005
#include <bits/stdc++.h>
using namespace std;
#define int long long

int calcMinimo(vector<int> &array, int indice, int n, int max, int sumActual) {
    
    if(indice == n) {
        return abs((sumActual)-(max-sumActual));
    }
    
    int sumActualActu; sumActualActu = sumActual + array[indice];
    
    int min1; min1 = calcMinimo(array, indice + 1, n, max, sumActual);
    int min2; min2 = calcMinimo(array, indice + 1, n, max, sumActualActu);
    
    return min(min1, min2);
    
    
}



signed main()
{
    
    int n, max; cin >> n; max = 0;
    vector<int> num;
    
    for(int i = 0; i < n; i++) {
        int piv; cin >> piv;
        max += piv;
        num.push_back(piv);
    }
    
    cout << calcMinimo(num, 0, n, max, 0);


    return 0;
}
//https://acm.timus.ru/problem.aspx?space=1&num=1083
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, calculo; cin >> n; calculo = 1;
    string casos; cin >> casos;
    
        while(n > 1) {
            calculo = calculo*n;
            n -= casos.size();
        }

    cout<< calculo;

    return 0;
}
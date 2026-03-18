//https://acm.timus.ru/problem.aspx?space=1&num=1209
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n, base, sumativo; cin >> n;
    set<int> conjuntito;
    base = 2;
    conjuntito.insert(1);
    conjuntito.insert(2);
    //ya teniamos listos el 1 y el 2 
    //11010010001000001000000
    //1-2-4-7-11-16
    for(int i = 2; base < INT_MAX; i++) {
        base += i;
        conjuntito.insert(base);
    }
    
    for(int i = 0; i < n; i++) {
        int piv; cin >> piv;
        if(conjuntito.count(piv)) {
            cout << 1 << " ";
        } else {
            cout << 0 << " ";
        }
    }

    return 0;
}
//https://acm.timus.ru/problem.aspx?space=1&num=1014
#include <bits/stdc++.h>
using namespace std;
#define int long long
 
int dividir(int n, stack<int> &elementos, bool &posible) {
    int a; a = n;
    
    for(int i = 9; i > 1; i--) {
        if(a%i == 0) {
            elementos.push(i);
            if((a) >= 10) {
                dividir((a/i), elementos, posible);
            }
            return 0;
        }
    }
    
    posible = false;
    return 0;
    
}

signed main()
{
    int n; cin >> n;
    bool posible; posible = true;
    stack<int> pilapila;
        
    dividir(n, pilapila, posible);
    
    if(n == 0) {
        cout << 10;
    } else if(n == 1) {
        cout << 1;
    } else if(posible == false) {
        cout << -1;
    } else {
        while(!pilapila.empty()) {
            cout << pilapila.top();
            pilapila.pop();
        }   
    }
    
    return 0;
}
//https://acm.timus.ru/problem.aspx?space=1&num=1068
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total; cin >> n;
    total = 1;
    
    if(n > 0) {
        for(int i = n; i > 1; i--) {
            total += i;       
        }    
    } else {
        for(int i = n; i < 1; i++) {
            total += i;       
        }    
    }
    
    cout << total;

    //5 4 3 2 1 
    //15
    
    return 0;
}
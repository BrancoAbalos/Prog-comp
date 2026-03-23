//https://codeforces.com/group/Pf5PtyLxbM/contest/672013/problem/F
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int a, x, count; cin >> a >> x;
    bool posible; posible = true;
    count = 0;
    while(a != 1 && posible == true) {
        for(int i = 2; i <= x; i++) {
            if(a%i == 0) {
                a = a/i;
                count++;
                break;
            }
            
            if(i == x) {
                cout << "Que es Obo?" << endl;
                posible = false;
                break;
            }
        }
    }
    
    if(posible == true) {
        cout << count << endl;   
    }


    return 0;
}
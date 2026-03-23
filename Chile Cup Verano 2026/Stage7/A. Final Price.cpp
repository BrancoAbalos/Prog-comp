//https://codeforces.com/group/Pf5PtyLxbM/contest/673760/problem/A
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, fin; cin >> n;
    fin = 0;
    for(int i = 0; i < n; i++) {
        int piv; cin >> piv;
        fin += piv;
    }
    
    cout<< fin;

    return 0;
}
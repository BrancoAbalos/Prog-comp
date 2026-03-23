//https://codeforces.com/group/Pf5PtyLxbM/contest/673760/problem/B
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, total, numMin; cin >> n >> total;
    double min;
    min = 100000;
    numMin = 0;
    for(int i = 0; i < n; i++) {
        double inici, vel; cin >> inici >> vel;
        if(((total-inici)/vel) < min) {
            min = ((total-inici)/vel);
            numMin = i+1;
        }
    }
    
    cout<< numMin;

    return 0;
}
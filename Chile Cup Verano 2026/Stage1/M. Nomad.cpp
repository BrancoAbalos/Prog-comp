//https://codeforces.com/group/Pf5PtyLxbM/contest/662604/problem/M 
//Q BUEN TEMA DE CLAIRO 
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, d;
    cin >> n >> d;
    priority_queue<int> mayores;
    int max1 = 0;
    int pos1 = 0;
    int max2 = 0;
    int pos2 = 0;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if (a > max1){
            max2 = max1;
            pos2 = pos1;
            max1 = a;
            pos1 = i + 1;
        } else if(a > max2){
            max2 = a;
            pos2 = i + 1;
        }
    }
    
    if(max1 == 0 || (max1 < d && max2 == 0)) cout << -1 << endl;
    else {
        int val1 = max1;
        int val2 = max2;
        while(d--){
            if(val1 >= 1) {
                cout << pos1 << " ";
                val1--;
            } else if(val2 >= 1){
                cout << pos2 << " ";
                val2--;
            } else {
                val1 = max1;
                val2 = max2;
                d++;
            }
        }
    }
    return 0;
}
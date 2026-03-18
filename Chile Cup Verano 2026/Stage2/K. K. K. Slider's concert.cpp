//https://codeforces.com/group/Pf5PtyLxbM/contest/664619/problem/K
#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int n,k, par;
    par = 0;
    priority_queue<int, vector<int>, greater<int>> derecha;
    priority_queue<int, vector<int>, greater<int>> izquierda;
    cin>>n>>k;
    for(int i = 0; i < 2; i++) {
        for(int j = 0; j < n; j++) {
            if(i == 0) {
                int piv;
                cin >> piv;
                derecha.push(piv);
            } else {
                int piv;
                cin >> piv;
                izquierda.push(piv);
            }
        }
    }
    
    for(int l = 0; l < n; l++) {
        
        if(k > derecha.top()) {
            k -= derecha.top();
            derecha.pop();
            
            if(k >= izquierda.top()) {
                
            k -= izquierda.top();
            izquierda.pop();
            par++;
            }
        }
        
    }
    
    cout << par << endl;
    
}
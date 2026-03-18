//https://acm.timus.ru/problem.aspx?space=1&num=1319
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, value; cin >> n;
    value = 1;
    vector<vector<int>> matriz(n, vector<int>(n, 0));
    for(int i = 0; i < n; i++) {
        int piv = n-1;
        for(int j = 0; j <= i; j++) {
            matriz[j][piv-i] = value;
            value++;
            piv++;
        }
        
        if(i == n-1) {
            for(int k = 1; k < n; k++) {
                int otroPiv = k;
                for(int j = 0; j < n-k; j++) {
                    matriz[otroPiv][j] = value;
                    otroPiv++;
                    value++;
                }
            }
        }
    }
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cout << matriz[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}
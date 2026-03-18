//https://acm.timus.ru/problem.aspx?space=1&num=1313
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    vector<vector<int>> matriz(n, vector<int>(n, 0));
    
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            int piv; cin >> piv;
            matriz[i][j] = piv;
        }
    }
    
    for(int i = 0; i < n; i++) {
        int piv; piv = i;
        for(int j = 0; j <= i; j++) {
            cout << matriz[piv][j] << " ";
            piv--;
        }
        
        if(i == n-1) {
            for(int k = 1; k < n; k++ ) {
                int limit; limit = n-1;
                for(int j = k; j < n; j++) {
                    cout << matriz[limit][j] << " ";
                    limit--;
                }
            }
        }
    }

    return 0;
}
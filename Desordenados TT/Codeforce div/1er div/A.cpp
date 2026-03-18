#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, n, a, pivote;
    cin >> t;
    for(int i = 0; i < t; i++) {
        pivote = 0;
        cin >> n;
        for(int j = 0; j < n; j++) {
            cin >> a;
            if(a > pivote) {
                pivote = a;
            }
        }
        cout << pivote << endl;
    }
}
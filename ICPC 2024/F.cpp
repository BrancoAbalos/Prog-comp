#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    int k, n, min, max;
    cin >> k >> n;
    min = ceil(n/3.0);
    max = ceil(n/2.0);
    
    if(k == max) {
        for(int i = 0; i < n; i++) {
            if(i%2 == 0) {
                cout << "X";
            } else {
                cout << "-";
            }
        }
    } else if (k == min) {
        int i, j;
        i = 0;
        j = 0;
        if(n%3 == 0) {
            while(j < n) {
                if(i == 1) {
                    cout << "X";
                    j++;
                    i++;
                } else if (i < 3) {
                    cout << "-";
                    j++;
                    i++;
                } else {
                    i = 0;
                }
            }
        } else {
            while(j < n) {
                if(i == 0) {
                    cout << "X";
                    j++;
                    i++;
                } else if (i < 3) {
                    cout << "-";
                    j++;
                    i++;
                } else {
                    i = 0;
                }
            }
        }
    } else if (k > min && k < max) {
        int reemplazos;
        reemplazos = max-k;
        for(int i = 0; i < reemplazos; i++) {
            cout << "X--X--";
        }
        
        for(int i = 0; i < n-(6*reemplazos); i++) {
            if(i%2 == 0) {
                cout << "X";
            } else {
                cout << "-";
            }
        }
    } else {
        cout << "*" << endl;
    }
    
    return 0;
}
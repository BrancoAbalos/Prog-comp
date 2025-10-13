#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 0; i < n; i++) {
        string palabra;
        cin >> palabra;
        if(palabra.size() > 10) {
            cout << palabra[0] << palabra.size() - 2 << palabra[palabra.size() - 1] << endl;
        } else {
            cout << palabra << endl;
        }
    }
}
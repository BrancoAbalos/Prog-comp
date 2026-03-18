#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    
    int angulo, n;
    double pi = 2 * acos(0.0);
    vector<pair<int, double>> sombras;
    cin >> angulo >> n;
    for(int i = 0; i < n; i++) {
        int inicio, altura;
        cin >> inicio >> altura;
        double adyacente = altura/(tan((angulo*pi)/180));
        sombras.push_back({inicio, adyacente});
    }
    sort(sombras.begin(), sombras.end());
    double suma = 0;
    for(int i = 0; i < n; i++) {
        int j = i+1;
        while(j < n && (sombras[i].first + sombras[i].second > sombras[j].first + sombras[j].second)) {
            j++;
            if(j >= n) {
                break;
            }
        } 
        if (j < n && (sombras[i].first + sombras[i].second > sombras[j].first)) {
            suma += (sombras[j].first - sombras[i].first);
        }   else {
            suma += sombras[i].second;
        }
        i = j-1;
    }
    
    cout << suma;
    
    return 0;
}
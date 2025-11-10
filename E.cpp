#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int k;
    vector<pair<int,int>> almacen;
    
    for(int i = 0; i < k; i++) {
        string m;
        if(m[0] == '+') {
            for(const auto&p : almacen) { //ta malo pq lo va a hacer por cada distinto, pero debo cambiarlo
                if(m[1] != p.first) {
                    almacen[] += 1;
                }
            }
        } else {

        }
    }
    
    std::cout<<"Hello World";

    return 0;
}

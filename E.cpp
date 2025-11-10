#include <bits/stdc++.h>
using namespace std;

int main()
{   
    int k;
    vector<pair<int,int>> almacen;
    
    for(int i = 0; i < k; i++) {
        string m;
        if(m[0] == '+') {
            int value;
            value = (m[1]-0);
            for(auto&p : almacen) {
                if(value != p.first) {
                    p.first = value;
                    p.second += 1;
                }
            }
        } else {

        }
    }
    
    std::cout<<"Hello World";

    return 0;
}

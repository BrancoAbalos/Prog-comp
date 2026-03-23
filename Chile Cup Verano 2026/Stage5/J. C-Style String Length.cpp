//https://codeforces.com/group/Pf5PtyLxbM/contest/669742/problem/J
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n; cin >> n;
    
    for(int i = 0; i < n; i++) {
        string caso; cin >> caso;
        int sum, slash; sum = 0; slash = 0;
        bool posible, invalid; posible = false, invalid = false;
        
        for(int j = 0; j < caso.size(); j++) {
            if(caso[j] == '\\') {
                slash++;
                if(posible == true) {
                    posible = false;
                    sum++;
                    continue;
                } 
                posible = true;
                
                if(j == caso.size() - 1) {
                    invalid = true;
                    break;
                }
            } else if (caso[j] == '0') {
                if(slash%2 != 0) {
                    break;
                }
                
                if(slash%2 == 0) {
                    sum++;
                }
            }
            
        }
        
        if(invalid == true) {
            cout << "INVALID" << endl;
            continue;
        }
        
        cout << sum << endl;
        
    }

    return 0;
}
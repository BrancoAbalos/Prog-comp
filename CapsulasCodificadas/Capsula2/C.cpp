//https://codeforces.com/group/vXmuu8BIUj/contest/623734/problem/C

#include <bits/stdc++.h>
using namespace std;

int main() {
    int casos;
    cin >> casos;
    for(int i = 0; i < casos; i++) {
        int islas, puentes;
        cin >> islas >> puentes;
        if(puentes >= islas || islas == 2 && puentes == 1){
            cout << "1" << endl;
        } else {
            cout << islas << endl;
        }
        
    }
}
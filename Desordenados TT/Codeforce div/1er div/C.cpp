//https://codeforces.com/contest/2162/problem/C

#include <bits/stdc++.h>
using namespace std;

int getSignificativo(int n) {
    for(int i = 31; i >= 0; i--) {
        if(n & (1 << i)) {
            return 1 << i;
        } 
    }
    return -1;
}



int main() {
	int t;
	cin >> t;
	for(int i = 0; i < t; i++) {
		int a, b, c;
		cin >> a >> b;
		c = a^b;
		
		if(c == 0) {
		    cout << 0 << endl;
		} else if (getSignificativo(b) > getSignificativo(a)){ 
		    cout << -1 << endl;
		} else if (c <= a) {
		    cout << 1 << endl << c << endl;
		} else {
            cout << 2 << endl << (c-getSignificativo(a)) << " " << getSignificativo(a) << endl;
		}
	}
}

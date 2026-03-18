#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int score;
        cin >> score;
        if(score < 1400){
            cout << "Division 4" << endl;
        } else if(score < 1600) {
            cout << "Division 3" << endl;    
        } else if(score < 1900) {
            cout << "Division 2" << endl;
        } else {
            cout << "Division 1" << endl;
        }
    }
}
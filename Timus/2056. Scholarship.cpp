//https://acm.timus.ru/problem.aspx?space=1&num=2056
#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n; cin >> n;
    double total; total = 0;
    bool satisfactory; satisfactory = true;
    
    for(int i = 0; i < n; i++) {
        double piv; cin >> piv;
        if(piv == 3){
            satisfactory = false;
        }
        total += piv;
    }
    
    if(total == 5*n && satisfactory) {
        cout << "Named";
    } else if ((total/n)>=4.5 && satisfactory) {
        cout << "High";
    } else if (satisfactory) {
        cout << "Common";
    } else {
        cout << "None";
    }

    return 0;
}
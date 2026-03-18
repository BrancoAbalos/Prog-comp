//https://acm.timus.ru/problem.aspx?space=1&num=2066
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c; cin >> a >> b >> c;

    if(a <= 1 && b <= 1) {
        cout << a-b-c << endl;
    } else {
        cout << a-b*c << endl;
    }
    
    return 0;
}
//https://acm.timus.ru/problem.aspx?space=1&num=1001
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    
    vector<int> grupito;
    int num;
    
    while(cin >> num) {
        grupito.push_back(num);
    }
    
    for(auto pos = grupito.end()-1; pos >= grupito.begin(); --pos) {
        cout << fixed << setprecision(4) << sqrt(*pos) << endl;
    }
    
    return 0;
}
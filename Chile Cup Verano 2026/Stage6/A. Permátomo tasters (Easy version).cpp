//https://codeforces.com/group/Pf5PtyLxbM/contest/672013/problem/A
#include <bits/stdc++.h>
using namespace std;
#define int long long

signed main()
{
    int n; cin >> n;
    for(int i = 0; i < n; i++) {
       int t, k; cin >> t >> k;
       vector<int> bases;
       vector<int> sumas;
       
       for(int j = 0; j < t; j++) {
            int piv; cin >> piv;
            bases.push_back(piv);
           }
           
           
       for(int j = 0; j < t; j++) {
           for(int k = 0; k < t; k++) {
               int piv;
               piv = bases[j] + bases[k];
               sumas.push_back(piv);
           }
           
       }
       
       sort(sumas.begin(), sumas.end());
       cout << sumas[k-1] << endl;
        
    }
    

    return 0;
}
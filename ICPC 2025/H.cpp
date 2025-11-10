#include <bits/stdc++.h>
using namespace std;
 
 
int main()
{
    int n, max, split;
    max = -1;
    split = 0;
    cin >> n;
    for(int i = 0; i < n; i++) {
        int k;
        cin >> k;
        if(k > max) {
            max = k;
            split++;
        }
    }
    cout<<split;
 
    return 0;
}
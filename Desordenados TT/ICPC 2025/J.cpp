#include <bits/stdc++.h>
using namespace std;


int main()
{
    int c, dist;
    c = 0;
    string s;
    cin >> s;
    for(int i = 0; i < s.length(); i++) {
        if(s[i] == 'h' && i+1 < s.length() && s[i+1] == 'a') {
            c++;
        }
        if(s[i] == 'b' && i+4 < s.length() && s[i+1] == 'o' && s[i+2] == 'o' && s[i+3] == 'o' && s[i+4] == 'o') {
            c--;
        }
        if(s[i] == 'b' && i+4 < s.length() && s[i+1] == 'r' && s[i+2] == 'a' && s[i+3] == 'v' && s[i+4] == 'o') {
            c += 3;
        }
    }
    
    cout<<c;

    return 0;
}
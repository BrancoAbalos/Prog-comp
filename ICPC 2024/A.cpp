#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    vector<char> unicas;
    cin >> s;
    t = s.size();
    
    for(int i = 0; i < t; i++) {
        
        bool existe;
        existe = false;
        
        for(char elemento:unicas) {
            if(elemento == s[i]){
                existe = true;
            }
        }
        
        if(!existe) {
            unicas.push_back(s[i]);
        }
        
    }
    
    cout << t-(unicas.size()) << endl;
}


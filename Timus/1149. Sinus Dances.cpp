//https://acm.timus.ru/problem.aspx?space=1&num=1149
#include <bits/stdc++.h>
using namespace std;


void calcularSin(int n, int max) {
    bool sum; sum = false;
    
    if(n == 0) {
        for(int j = 1; j < max-n; j++) {
            cout << "(";
        }   
    }
    
    for(int i = 0; i < n+1; i++) {
        
        cout << "sin(" << i+1;
        
        if(sum && n > 0 && i < n) {
            cout <<"+";
            sum = !sum;
        } else if(n > 0 && i < n) {
            cout << "-";
            sum = !sum;
        }
    }
    
    for(int j = 0; j < n+1; j++) {
        cout << ")";
    }
}


int main()
{
    //Let An = sin(1вЂ“sin(2+sin(3вЂ“sin(4+вЂ¦sin(n))вЂ¦)
    //Let Sn = (вЂ¦(A1+n)A2+nвЂ“1)A3+вЂ¦+2)An+1
    
    //n = 3 
    // ((sin(1)+3) sin(1вЂ“sin(2))+2) sin(1вЂ“sin(2+sin(3)))+1

    int n; cin >> n;
    int fakeN; fakeN = n;
    
    
    for(int i = 0; i < n; i++) {
        calcularSin(i, n);
        cout << "+" << fakeN;
        if(i < n-1) {
            cout << ")";
        }
        fakeN--;
    }
    
    return 0;
}
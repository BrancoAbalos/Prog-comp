//https://leetcode.com/problems/climbing-stairs/description/
class Solution {
public:
    vector<int> almacen;

    int climbStairs(int n) {
        almacen.resize(n+1, 0);
        return verificar(n, almacen);
    }

    int verificar(int n, vector<int> &memo) {
        if(memo[n] != 0) {
            return memo[n]; 
        }

        if(n == 1) {
            return 1;
        }

        if(n == 2) {
            return 2;
        }

        memo[n] = verificar(n-1, memo) + verificar(n-2, memo);
        return memo[n];
    }
};
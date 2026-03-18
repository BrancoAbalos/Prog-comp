//https://codeforces.com/group/Pf5PtyLxbM/contest/666695/problem/H
#include <bits/stdc++.h>
using namespace std;
#define int long long

void print_acc_best(vector<pair<int,int>> acc_best) {
    int i=1;
    for(auto [acc, best] : acc_best) {
        cout << "nodo: " << i << " ";
        cout << "acc: " << acc << " best: " << best << endl;
        i++;
    }
}

void dfs(vector<vector<int>>& tree, int p, vector<pair<int, int>>& acc_best, vector<int>& costs) {

    int acc = costs[p];
    int best = 0;
    for(int v : tree[p]) {
        dfs(tree, v, acc_best, costs);
        acc += acc_best[v].first;

        if(acc_best[v].second > 0) {
            best += acc_best[v].second;
        }
    }

    acc_best[p] = {acc, max(best, acc)}; 
    // cout << "nodo: " << p+1 << " acc: " << acc_best[p].first << " best: " << acc_best[p].second << endl; 
}


signed main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(nullptr);
    int n; cin >> n;

    vector<int> a(n);
    for(int &ai : a) cin >> ai;

    vector<vector<int>> tree(n);
    vector<pair<int, int>> acc_best(n, {0, 0});

    for(int i=1; i<n; i++) {
        int si; cin >> si; si--;
        tree[si].push_back(i);
    }

    dfs(tree, 0, acc_best, a);

    cout << acc_best[0].second << endl;

    return 0;
}
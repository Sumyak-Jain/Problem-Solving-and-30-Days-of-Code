#include <iostream>
#include <vector>
#include <functional>
#include <cassert>
#define repeat(i,n) for (int i = 0; (i) < int(n); ++(i))
using namespace std;
int gcd(int a, int b) { while (a) { b %= a; swap(a, b); } return b; }
int main() {
    int query; cin >> query;
    while (query --) {
        int n; cin >> n;
        vector<vector<int> > g(n);
        repeat (i,n-1) {
            int u, v; cin >> u >> v; -- u; -- v;
            g[u].push_back(v);
            g[v].push_back(u);
        }
        const int root = 0;
        vector<int> parent(n, -1); {
            function<void (int)> go = [&](int i) {
                for (int j : g[i]) if (j != parent[i]) {
                    parent[j] = i;
                    go(j);
                }
            };
            go(root);
        }
        int guess, k; cin >> guess >> k;
        vector<int> imos(n);
        while (guess --) {
            int u, v; cin >> u >> v; -- u; -- v;
            if (parent[v] == u) { // Alice's guess is true when root is 0
                imos[root] += 1;
                imos[v] -= 1;
            } else if (parent[u] == v) {
                imos[u] += 1;
            } else {
                assert (false);
            }
        }
        int cnt = 0;
        function<void (int, int)> go = [&](int i, int acc) {
            acc += imos[i];
            if (acc >= k) ++ cnt;
            for (int j : g[i]) if (j != parent[i]) go(j, acc);
        };
        go(root, 0);
        int d = gcd(cnt, n);
        cout << cnt/d << "/" << n/d << endl;
    }
    return 0;
}

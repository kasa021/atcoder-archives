/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc304/submissions/41961969
 * Submitted at: 2023-06-03 12:54:03
 * Problem URL: https://atcoder.jp/contests/abc304/tasks/abc304_e
 * Result: AC
 * Execution Time: 589 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    int n, m;
    cin >> n >> m;
    dsu d(n);
    rep(i, m) {
        int a, b;
        cin >> a >> b;
        a--;
        b--;
        d.merge(a, b);
    }
    int k;
    cin >> k;
    vector<P> c(k);  // パスが存在してはいけない頂点
    rep(i, k) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        x = d.leader(x);
        y = d.leader(y);
        c[i] = P(min(x, y), max(x, y));
    }
    sort(all(c));
    c.erase(unique(all(c)), c.end());
    int q;
    cin >> q;
    rep(i, q) {
        int x, y;
        cin >> x >> y;
        x--;
        y--;
        x = d.leader(x);
        y = d.leader(y);
        if (x == y) {
            cout << "Yes" << endl;
            continue;
        }
        P p = P(min(x, y), max(x, y));
        if (binary_search(all(c), p)) {
            cout << "No" << endl;
        } else {
            cout << "Yes" << endl;
        }
    }
}
/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/ahc020/submissions/42184929
 * Submitted at: 2023-06-11 06:20:43
 * Problem URL: https://atcoder.jp/contests/ahc020/tasks/ahc020_a
 * Result: AC
 * Execution Time: 12 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
    #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<P>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    ll n, m, k;  //n;頂点数　m;辺の数　k;住民の数
    cin >> n >> m >> k;
    vector<ll> x(n), y(n); // 頂点座標
    rep(i, n) cin >> x[i] >> y[i];
    graph g(n);
    rep(i,m){
        ll a, b, c;
        cin >> a >> b >> c;
        g[a-1].push_back({b-1, c}); // g[i][j].first: 頂点　g[i][j].second: コスト
        g[b-1].push_back({a-1, c});
    }
    vector<ll> peoplex(k), peopley(k); // 住民の座標
    rep(i, k) cin >> peoplex[i] >> peopley[i];

    rep(i,n) cout<< 3000 << " ";
    cout << endl;
    rep(i,m) cout<< 1 << " ";
    cout << endl;
}
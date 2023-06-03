/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc304/submissions/41958273
 * Submitted at: 2023-06-03 12:43:19
 * Problem URL: https://atcoder.jp/contests/abc304/tasks/abc304_d
 * Result: AC
 * Execution Time: 526 ms
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
using graph = vector<vector<ll>>;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()

int main() {
    ll w, h;
    cin >> w >> h;
    ll n;
    cin >> n;

    vector<ll> sx(n), sy(n);  // イチゴの座標
    rep(i, n) {
        cin >> sx[i] >> sy[i];
    }
    ll A;
    cin >> A;
    vector<ll> a(A);  // 線の座標,x座標を区切るもの
    rep(i, A) {
        cin >> a[i];
    }
    a.push_back(0);
    a.push_back(w);
    ll B;
    cin >> B;
    vector<ll> b(B);  // 線の座標,y座標を区切るもの
    rep(i, B) {
        cin >> b[i];
    }
    b.push_back(0);
    b.push_back(h);
    sort(all(a));
    sort(all(b));
    vector<ll> ix(n), iy(n);  // イチゴがどの区画に入るか
    rep(i, n) {
        ll x = lower_bound(all(a), sx[i]) - a.begin();
        ll y = lower_bound(all(b), sy[i]) - b.begin();
        ix[i] = x;
        iy[i] = y;
    }
    map<P, ll> mp;
    rep(i, n) {
        mp[P(ix[i], iy[i])]++;
    }
    ll mi = 20000000, mx = 0;
    for (auto p : mp) {
        mi = min(mi, p.second);
        mx = max(mx, p.second);
    }
    if (n < (A + 1) * (B + 1)) mi = 0;
    set<ll> sx2, sy2;
    rep(i, n) {
        sx2.insert(ix[i]);
        sy2.insert(iy[i]);
    }
    if (sx2.size() != A + 1) mi = 0;
    if (sy2.size() != B + 1) mi = 0;
    cout << mi << " " << mx << endl;
}
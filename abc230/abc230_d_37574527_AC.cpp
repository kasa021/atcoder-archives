/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc230/submissions/37574527
 * Submitted at: 2022-12-27 04:11:15
 * Problem URL: https://atcoder.jp/contests/abc230/tasks/abc230_d
 * Result: AC
 * Execution Time: 127 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
#include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    ll n, d, l, r;
    cin >> n >> d;
    vector<P> lr;
    rep(i, n)
    {
        cin >> l >> r;
        lr.emplace_back(l, r);
    }
    sort(begin(lr), end(lr), [](P &a, P &b)
         { return a.second < b.second; });
    ll ans = 0, x = -(1LL << 40);
    for (auto &[l, r] : lr)
    {
        if (x + d - 1 < l)
        {
            ans++, x = r;
        }
    }
    cout << ans << endl;
}
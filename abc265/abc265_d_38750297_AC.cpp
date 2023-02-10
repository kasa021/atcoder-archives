/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc265/submissions/38750297
 * Submitted at: 2023-02-10 06:47:51
 * Problem URL: https://atcoder.jp/contests/abc265/tasks/abc265_d
 * Result: AC
 * Execution Time: 78 ms
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
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main()
{
    ll n, P, Q, R;
    cin >> n >> P >> Q >> R;
    vector<ll> a(n);
    rep(i, n) cin >> a[i];
    ll ans = 0;
    vector<ll> csa(n + 1);
    csa[0] = 0;
    for (int i = 0; i < n; i++)
        csa[i + 1] = csa[i] + a[i];

    ll x, y, z, w;
    rep(x, n + 1)
    {
        y = lower_bound(all(csa), csa[x] + P) - csa.begin();
        z = lower_bound(all(csa), Q + csa[y]) - csa.begin();
        w = lower_bound(all(csa), R + csa[z]) - csa.begin();

        if (csa[y] - csa[x] == P && csa[z] - csa[y] == Q && csa[w] - csa[z] == R)
        {
            cout << "Yes" << endl;
            return 0;
        }
    }
    cout << "No" << endl;
}
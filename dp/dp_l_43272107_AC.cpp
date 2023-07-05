/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/43272107
 * Submitted at: 2023-07-05 11:09:35
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_l
 * Result: AC
 * Execution Time: 183 ms
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
  ll n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];
  vector<vector<ll>> dp(n + 1, vector<ll>(n + 1, 0));

  auto f = [&](auto f, ll l, ll r) -> ll {
    if(dp[l][r]) return dp[l][r];
    if (l == r) dp[l][r] = a[r];
    else
      dp[l][r] = max(a[l] - f(f, l + 1, r), a[r] - f(f, l, r - 1));
    return dp[l][r];
  };

  cout << f(f, 0, n - 1) << endl;
}

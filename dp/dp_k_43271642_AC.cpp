/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/43271642
 * Submitted at: 2023-07-05 10:45:40
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_k
 * Result: AC
 * Execution Time: 28 ms
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
  int n, k;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  vector<int> dp(k + 1, 0);
  rep1(i, 1, k + 1) {
    rep(j, n) {
      if (i - a[j] >= 0 && dp[i - a[j]] == 0) dp[i] = 1;
    }
  }
  if (dp[k] == 1)
    cout << "First" << endl;
  else
    cout << "Second" << endl;
}

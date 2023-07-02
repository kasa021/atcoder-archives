/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/yahoo-procon2019-qual/submissions/43181382
 * Submitted at: 2023-07-02 09:48:27
 * Problem URL: https://atcoder.jp/contests/yahoo-procon2019-qual/tasks/yahoo_procon2019_qual_c
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;

int main() {
  ll k, a, b;
  cin >> k >> a >> b;
  ll ans = 0;
  if(a >= b - 2) {
    ans = k + 1;
  } else {
    ll cnt = k - (a - 1);
    ans = a + (b - a) * (cnt / 2) + cnt % 2;
  }
  cout << ans << endl;
}

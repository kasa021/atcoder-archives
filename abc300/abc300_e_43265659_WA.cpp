/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc300/submissions/43265659
 * Submitted at: 2023-07-05 06:25:17
 * Problem URL: https://atcoder.jp/contests/abc300/tasks/abc300_e
 * Result: WA
 * Execution Time: 11 ms
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
#define mint modint998244353

int main() {
  int n;
  cin >> n;

  map<ll, mint> memo;
  auto f = [&](auto f, ll i) -> mint {
    if (memo.count(i)) return memo[i];
    if (i >= n) return n == i ? 1 : 0;
    mint res = 0;
    rep1(j, 2, 7) res += f(f, i * j)/5;
    return memo[i] = res;
  };
  cout << f(f, 1).val() << endl;
}

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/caddi2018b/submissions/43231905
 * Submitted at: 2023-07-03 16:52:28
 * Problem URL: https://atcoder.jp/contests/caddi2018b/tasks/caddi2018_a
 * Result: AC
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

vector<P> prime_factorize(ll n) {
  vector<P> res;
  for (ll i = 2; i * i <= n; i++) {
    if (n % i != 0) continue;
    ll ex = 0;
    while (n % i == 0) {
      ex++;
      n /= i;
    }
    res.push_back({ i, ex });
  }
  if (n != 1) res.push_back({ n, 1 });
  return res;
}

int main() {
  ll n, p;
  cin >> n >> p;
  vector<P> pf = prime_factorize(p);
  ll ans = 1;
  for (auto [a, b] : pf) {
    if (b >= n) ans *= (ll)pow(a, b / n);
  }
  cout << ans << endl;
}

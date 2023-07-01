/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc139/submissions/43080422
 * Submitted at: 2023-07-01 06:40:14
 * Problem URL: https://atcoder.jp/contests/abc139/tasks/abc139_d
 * Result: AC
 * Execution Time: 16 ms
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
  ll n;
  cin >> n;
  cout << (n - 1) * (n) / 2 << endl;
}

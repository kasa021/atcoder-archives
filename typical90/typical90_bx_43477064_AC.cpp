/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/43477064
 * Submitted at: 2023-07-11 05:54:10
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_bx
 * Result: AC
 * Execution Time: 44 ms
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
  int n;
  cin >> n;
  vector<ll> a(n);
  rep(i, n) cin >> a[i];

  ll sum = 0;
  rep(i, n) sum += a[i];
  ll one_tenth = (sum % 10 == 0 ? sum / 10 : -1);
  int l = 0, r = 0;
  bool ok = false;
  ll now = 0;

  if(one_tenth == -1) {
    cout << "No" << endl;
    return 0;
  }

  // しゃくとり法
  while(l < n) {
    if(now == one_tenth) {
      ok = true;
      break;
    }
    if(now < one_tenth) {
      now += a[r];
      r = (r + 1) % n;
    } else {
      now -= a[l];
      l++;
    }
  }

  if(ok) {
    cout << "Yes" << endl;
  } else {
    cout << "No" << endl;
  }
}

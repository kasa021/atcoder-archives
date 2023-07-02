/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/agc013/submissions/43180985
 * Submitted at: 2023-07-02 09:32:21
 * Problem URL: https://atcoder.jp/contests/agc013/tasks/agc013_a
 * Result: AC
 * Execution Time: 38 ms
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
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];

  int ans = 0;
  int now = 0;

  rep(i, n-1) {
    if (now == 0) {
      if (a[i] > a[i + 1]) {
        now = -1;
      }
      else if (a[i] < a[i + 1]) {
        now = 1;
      }
      else if (a[i] == a[i + 1]) {
        now = 0;
      }
    }
    else if (now == 1) {
      if (a[i] > a[i + 1]) {
        ans++;
        now = 0;
      }
    }
    else {
      if (a[i] < a[i + 1]) {
        ans++;
        now = 0;
      }
    }
  }

  cout << ans + 1 << endl;
}

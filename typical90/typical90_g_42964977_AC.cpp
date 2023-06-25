/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42964977
 * Submitted at: 2023-06-25 14:35:32
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_g
 * Result: AC
 * Execution Time: 651 ms
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

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  rep(i, n) cin >> a[i];
  sort(all(a));
  int q,b;
  cin >> q;
  ll ans = 0;
  rep(i, q) {
    cin >> b;
    auto iter = lower_bound(all(a), b);
    if(iter == a.begin()) {
      ans = abs((ll)(*iter) - (ll)b);
    } else if(iter == a.end()) {
      ans = abs((ll)(*prev(iter)) - (ll)b);
    } else {
      ans = min(abs((ll)(*iter) - (ll)b), abs((ll)*prev(iter) - (ll)b));
    }
    cout << ans << endl;
  }
}
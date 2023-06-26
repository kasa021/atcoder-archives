/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/typical90/submissions/42988366
 * Submitted at: 2023-06-26 16:47:54
 * Problem URL: https://atcoder.jp/contests/typical90/tasks/typical90_g
 * Result: AC
 * Execution Time: 686 ms
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
  // ソートして昇順にする
  sort(all(a));
  int q, b;
  cin >> q;
  ll ans = 0;
  rep(i, q) {
    cin >> b;
    // 二分探索する
    auto iter = lower_bound(all(a), b);
    if (iter == a.begin()) {
      // aの最小値より小さい場合
      ans = abs(*iter - b);
    }
    else if (iter == a.end()) {
      //　aの最大値より大きい場合
      ans = abs(*prev(iter) - b);
    }
    else {
      // それ以外の場合
      ans = min((abs(*iter) - b), abs(*prev(iter) - b));
    }
    cout << ans << endl;
  }
}
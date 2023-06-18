/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc185/submissions/42512705
 * Submitted at: 2023-06-18 03:16:43
 * Problem URL: https://atcoder.jp/contests/abc185/tasks/abc185_f
 * Result: AC
 * Execution Time: 707 ms
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

int op(int a, int b) { return a ^ b; } // 二項演算

int e() { return 0; }  // 単位元

int main() {
  int n, q;
  cin >> n >> q;
  segtree<int, op,e> seg(n);
  rep(i, n) {
    int a;
    cin >> a;
    seg.set(i, a);
  }
  rep(i, q) {
    int t, x, y;
    cin >> t >> x >> y;
    if (t == 1) {
      x--;
      int a = seg.get(x);
      seg.set(x, a ^ y);
    } else {
      x--;
      y--;
      cout << seg.prod(x, y + 1) << endl;
    }
  }
}
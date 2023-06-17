/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc306/submissions/42370803
 * Submitted at: 2023-06-17 15:47:13
 * Problem URL: https://atcoder.jp/contests/abc306/tasks/abc306_e
 * Result: AC
 * Execution Time: 1631 ms
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

int k;
multiset<int> x, y;
ll s;

void balance() {
  while (x.size() < k) {
    auto iy = y.end();
    iy--;
    x.insert(*iy);
    s += *iy;
    y.erase(iy);
  }
  if (x.empty() || y.empty()) return;

  while (1) {
    auto ix = x.begin();
    auto iy = y.end();
    iy--;
    int nx = *ix;
    int ny = *iy;
    if (nx >= ny) break;
    s += ny - nx;
    x.erase(ix);
    y.erase(iy);
    x.insert(ny);
    y.insert(nx);
  }
}

void add(int v) {
  y.insert(v);
  balance();
}

void erase(int v) {
  auto ix = x.find(v);
  if (ix != x.end()) {
    s -= v;
    x.erase(ix);
  }
  else {
    y.erase(y.find(v));
  }
  balance();
}

int main() {
  int n;
  cin >> n >> k;
  vector<int> a(n);
  rep(i, k) x.insert(0);
  rep1(i, k, n) y.insert(0);
  s = 0;

  int q;
  cin >> q;
  while (q--) {
    int p, w;
    cin >> p >> w;
    p--;
    add(w);
    erase(a[p]);
    a[p] = w;
    cout << s << endl;
  }
  return 0;
}
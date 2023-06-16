/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc213/submissions/42295035
 * Submitted at: 2023-06-16 11:31:18
 * Problem URL: https://atcoder.jp/contests/abc213/tasks/abc213_c
 * Result: AC
 * Execution Time: 239 ms
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
  int h, w, n;
  cin >> h >> w >> n;
  vector<int> a(n), b(n);
  rep(i, n) cin >> a[i] >> b[i];

  vector<int> x=a, y=b;
  sort(all(x));
  sort(all(y));
  x.erase(unique(all(x)), x.end());
  y.erase(unique(all(y)), y.end());
  rep(i,n){
    auto itr_a = lower_bound(all(x), a[i]) - x.begin();
    auto itr_b = lower_bound(all(y), b[i]) - y.begin();
    a[i] = itr_a;
    b[i] = itr_b;
  }
  rep(i,n){
    cout << a[i] + 1 << " " << b[i] + 1 << endl;
  }
}
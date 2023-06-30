/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc050/submissions/43067685
 * Submitted at: 2023-06-30 12:25:23
 * Problem URL: https://atcoder.jp/contests/abc050/tasks/abc050_b
 * Result: AC
 * Execution Time: 8 ms
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
  vector<int> t(n);
  rep(i, n) cin >> t[i];
  int sum = accumulate(all(t), 0);
  int ans = 1e9;
  int m;
  cin >> m;
  rep(i, m) {
    int p, x;
    cin >> p >> x;
    p--;
    cout<<sum - t[p] + x<<endl;
  }
}

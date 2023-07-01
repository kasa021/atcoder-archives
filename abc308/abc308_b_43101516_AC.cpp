/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc308/submissions/43101516
 * Submitted at: 2023-07-01 12:12:11
 * Problem URL: https://atcoder.jp/contests/abc308/tasks/abc308_b
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
  int n, m;
  cin >> n >> m;
  vector<string> c(n);
  map<string, int> mp;
  rep(i, n) cin >> c[i];
  vector<string> d(m);
  rep(i,m) cin>>d[i];
  int p0 = 0;
  cin >> p0;
  rep(i, m) {
    int a;
    cin  >> a;
    mp[d[i]] = a;
  }
  int ans = 0;
  rep(i, n) {
    if (!mp.count(c[i])) {
      ans += p0;
    }
    else {
      ans += mp[c[i]];
    }
  }
  cout << ans << endl;
}
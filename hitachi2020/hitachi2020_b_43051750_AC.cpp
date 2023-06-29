/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/hitachi2020/submissions/43051750
 * Submitted at: 2023-06-29 15:11:16
 * Problem URL: https://atcoder.jp/contests/hitachi2020/tasks/hitachi2020_b
 * Result: AC
 * Execution Time: 110 ms
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
  int A, B, m;
  cin>>A>>B>>m;
  vector<int> a(A), b(B);
  rep(i, A) cin>>a[i];
  rep(i, B) cin>>b[i];
  int min_a = *min_element(all(a));
  int min_b = *min_element(all(b));
  int ans = min_a + min_b;

  rep(i, m) {
    int x, y, c;
    cin>>x>>y>>c;
    x--; y--;
    ans = min(ans, a[x] + b[y] - c);
  }

  cout << ans << endl;
}
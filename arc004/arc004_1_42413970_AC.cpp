/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc004/submissions/42413970
 * Submitted at: 2023-06-17 16:04:54
 * Problem URL: https://atcoder.jp/contests/arc004/tasks/arc004_1
 * Result: AC
 * Execution Time: 3 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)

int main() {
  int n;
  cin >> n;
  vector<int> x(n), y(n);
  rep(i, n) cin >> x[i] >> y[i];
  int ans = 0;
  rep(i, n) {
    rep(j, n) {
      ans = max(ans, (x[i] - x[j]) * (x[i] - x[j]) + (y[i] - y[j]) * (y[i] - y[j]));
    }
  }
  cout << fixed << setprecision(10) << sqrt(ans) << endl;
}
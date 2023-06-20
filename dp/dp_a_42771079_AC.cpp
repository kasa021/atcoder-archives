/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/dp/submissions/42771079
 * Submitted at: 2023-06-20 15:03:05
 * Problem URL: https://atcoder.jp/contests/dp/tasks/dp_a
 * Result: AC
 * Execution Time: 31 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)

int main() {
  int n;
  cin >> n;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  vector<int> dp(n, 0);
  dp[0] = 0;
  dp[1] = abs(h[1] - h[0]);
  // iを2からn-1まで回す
  rep1(i, 2, n) {
    dp[i] = min(dp[i - 1] + abs(h[i] - h[i - 1]), dp[i - 2] + abs(h[i] - h[i - 2]));
  }
  cout << dp[n - 1] << endl;
}
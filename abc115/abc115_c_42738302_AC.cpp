/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc115/submissions/42738302
 * Submitted at: 2023-06-19 05:01:03
 * Problem URL: https://atcoder.jp/contests/abc115/tasks/abc115_c
 * Result: AC
 * Execution Time: 46 ms
 */

#include <bits/stdc++.h>
using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> h(n);
  rep(i, n) cin >> h[i];
  // sort して昇順に並べる
  sort(h.begin(), h.end());

  int ans = 1e9;
  rep(i, n - k + 1) {
    ans = min(ans, h[i + k - 1] - h[i]);
  }
  cout << ans << endl;
}
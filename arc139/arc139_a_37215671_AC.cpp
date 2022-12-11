/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc139/submissions/37215671
 * Submitted at: 2022-12-11 10:24:55
 * Problem URL: https://atcoder.jp/contests/arc139/tasks/arc139_a
 * Result: AC
 * Execution Time: 27 ms
 */

#include <iostream>
using namespace std;

int main() {
  int N;
  cin >> N;
  long long ans = 0;
  for (int i = 0, t; i < N; i++) {
    cin >> t;
    long long pt = 1LL << t;
    ans = (ans / pt + 1) * pt;
    if (ans % (pt * 2) == 0) ans += pt;
  }
  cout << ans << "\n";
}

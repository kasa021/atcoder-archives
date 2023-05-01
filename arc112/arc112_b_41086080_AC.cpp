/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/arc112/submissions/41086080
 * Submitted at: 2023-05-01 02:45:33
 * Problem URL: https://atcoder.jp/contests/arc112/tasks/arc112_b
 * Result: AC
 * Execution Time: 8 ms
 */

#include <bits/stdc++.h>

using namespace std;

pair<long, long> exact(const long &B, const long &C) {
  const auto n = C / 2;
  if (C % 2) {
    return {-B - n, -B + n};
  } else {
    if (!C)
      return {B, B};
    return {B - n, B + n - 1};
  }
}

int main() {
  long B, C;
  cin >> B >> C;
  const auto [a, b] = exact(B, C);
  const auto [c, d] = exact(B, C - 1);
  cout << (b - a + 1) + (d - c + 1) - max(0l, min(b, d) - max(a, c) + 1)
       << endl;
  return 0;
}

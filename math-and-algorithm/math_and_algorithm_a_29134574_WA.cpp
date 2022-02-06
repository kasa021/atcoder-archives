/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/math-and-algorithm/submissions/29134574
 * Submitted at: 2022-02-06 16:05:56
 * Problem URL: https://atcoder.jp/contests/math-and-algorithm/tasks/math_and_algorithm_a
 * Result: WA
 * Execution Time: 8 ms
 */

#include <iostream>
using namespace std;
int main() {
  int N;
  cin >> N;
  int sum = 0, ans;
  int a;
  for (int i = 0; i < N; i++) {
    cin >> a;
    sum += a;
  }
  ans = sum % 100;
  cout << ans;
}
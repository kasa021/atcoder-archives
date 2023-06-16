/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc196/submissions/42298915
 * Submitted at: 2023-06-16 14:51:44
 * Problem URL: https://atcoder.jp/contests/abc196/tasks/abc196_c
 * Result: AC
 * Execution Time: 194 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main() {
  ll n;
  cin >> n;
  int i = 0;
  while ((stoll(to_string(i) + to_string(i))) <= n) i++;
  cout << i-1 << endl;
}
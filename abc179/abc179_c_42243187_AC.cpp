/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc179/submissions/42243187
 * Submitted at: 2023-06-13 15:32:37
 * Problem URL: https://atcoder.jp/contests/abc179/tasks/abc179_c
 * Result: AC
 * Execution Time: 9 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  for (int i = 1; i < n;i++){
    ans += (n - 1) / i;
  }
    cout << ans << endl;
}
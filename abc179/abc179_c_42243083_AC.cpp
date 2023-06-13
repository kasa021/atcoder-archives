/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc179/submissions/42243083
 * Submitted at: 2023-06-13 15:26:42
 * Problem URL: https://atcoder.jp/contests/abc179/tasks/abc179_c
 * Result: AC
 * Execution Time: 1574 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, ans = 0;
  cin >> n;
  for (int c = 1; c < n; c++) {
    int ab = n - c;
    for (int i = 1; i * i <= ab; i++) {
      if (ab % i == 0) {
        if (i * i == ab) ans++;
        else
          ans += 2;
      }
    }
  }
  cout << ans << endl;
}
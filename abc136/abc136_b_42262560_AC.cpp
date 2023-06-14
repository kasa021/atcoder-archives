/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc136/submissions/42262560
 * Submitted at: 2023-06-14 16:02:44
 * Problem URL: https://atcoder.jp/contests/abc136/tasks/abc136_b
 * Result: AC
 * Execution Time: 16 ms
 */

#include <bits/stdc++.h>
using namespace std;

int main() {
  int n;
  cin >> n;
  int ans = 0;
  for (int i = 1; i < n + 1;i++){
    if (to_string(i).size() % 2 == 1){
      ans++;
    }
  }
  cout << ans << endl;
}
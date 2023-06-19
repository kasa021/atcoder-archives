/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc012/submissions/42752746
 * Submitted at: 2023-06-19 16:41:19
 * Problem URL: https://atcoder.jp/contests/abc012/tasks/abc012_3
 * Result: AC
 * Execution Time: 4 ms
 */

#include <bits/stdc++.h>
using namespace std;
using ll = long long;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)

int main() {
  int n;
  cin >> n;
  int sum = 0;
  // 掛け算の総和
  rep1(i, 1, 10) {
    rep1(j, 1, 10) {
      sum += i * j;
    }
  }
  // 後回しにした数
  int diff = sum - n;
  rep1(i, 1, 10) {
    // 割り切れるかつ一桁
    if (diff % i == 0 && diff / i < 10) {
      cout << i << " x " << diff / i << endl;
    }
  }
  return 0;
}
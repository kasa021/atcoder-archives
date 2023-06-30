/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc158/submissions/43067309
 * Submitted at: 2023-06-30 12:08:51
 * Problem URL: https://atcoder.jp/contests/abc158/tasks/abc158_c
 * Result: AC
 * Execution Time: 6 ms
 */

#include <bits/stdc++.h>
#include <cmath>

#if __has_include(<atcoder/all>)
  #include <atcoder/all>
using namespace atcoder;
#endif

using namespace std;
#define rep(i, n) for (int i = 0; i < (n); ++i)
#define rep1(i, s, n) for (int i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using ll = long long;
using P = pair<int, int>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  int a, b;
  cin>>a>>b;
  rep1(i,1,10000){
    int x = i * 8 / 100;
    int y = i * 10 / 100;
    if (x == a && y == b) {
      cout << i << endl;
      return 0;
    }
  }
  cout << -1 << endl;
}

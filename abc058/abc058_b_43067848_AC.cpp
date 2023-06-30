/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc058/submissions/43067848
 * Submitted at: 2023-06-30 12:33:48
 * Problem URL: https://atcoder.jp/contests/abc058/tasks/abc058_b
 * Result: AC
 * Execution Time: 8 ms
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
  string o, e;
  cin>>o>>e;
  rep(i, e.size()) {
    cout << o[i] << e[i];
  }
  if (o.size() > e.size()) cout << o.back();
  cout << endl;
}

/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc062/submissions/43066790
 * Submitted at: 2023-06-30 11:43:42
 * Problem URL: https://atcoder.jp/contests/abc062/tasks/abc062_b
 * Result: AC
 * Execution Time: 7 ms
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
  int h, w;
  cin >> h >> w;
  vector<vector<char>> s(h+2, vector<char>(w+2,'#'));
  rep1(i, 1, h+1)rep1(j, 1, w+1) cin >> s[i][j];
  rep(i,h+2){
    rep(j,w+2){
      cout << s[i][j];
    }
    cout << endl;
  }
  return 0;
}
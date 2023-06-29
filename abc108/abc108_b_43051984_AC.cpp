/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc108/submissions/43051984
 * Submitted at: 2023-06-29 15:29:33
 * Problem URL: https://atcoder.jp/contests/abc108/tasks/abc108_b
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
  int x1, y1, x2, y2;
  cin >> x1 >> y1 >> x2 >> y2;
  int x = x2-x1;
  int y = y2-y1;
  cout<< x2-y <<" "<< y2+x <<" "<< x1-y <<" "<< y1+x << endl;
}
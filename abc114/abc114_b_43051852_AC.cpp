/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc114/submissions/43051852
 * Submitted at: 2023-06-29 15:19:41
 * Problem URL: https://atcoder.jp/contests/abc114/tasks/abc114_b
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
  string s;
  cin >> s;
  int ans = 1e9;
  rep(i, s.size() - 2) {
    int num = stoi(s.substr(i, 3));
    ans = min(ans, abs(num - 753));
  }
  cout << ans << endl;
}
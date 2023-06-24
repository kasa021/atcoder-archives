/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc307/submissions/42927813
 * Submitted at: 2023-06-24 13:36:31
 * Problem URL: https://atcoder.jp/contests/abc307/tasks/abc307_d
 * Result: WA
 * Execution Time: 24 ms
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
  int n;
  cin >> n;
  string s;
  cin >> s;

  stack<int> st_first;
  queue<int> st_second;
  vector<int> ok(n, 0);
  int cnt = 1;
  rep(i, n) {
    if (s[i] == '(') st_first.push(i);
    else if (s[i] == ')')
      st_second.push(i);
    if (!st_first.empty() && !st_second.empty()) {
      int first = st_first.top();
      int second = st_second.front();
      if (first < second) {
        ok[first] = second - first + 1;
        st_first.pop();
        st_second.pop();
      }
    }
  }
  rep1(i, 1, n) {
    ok[i] = max(ok[i], ok[i - 1] - 1);
  }
  // rep(i, n) cout << ok[i] << " ";
  // cout << endl;
  rep(i, n) {
    if (ok[i] == 0) cout << s[i];
  }
  cout << endl;
}
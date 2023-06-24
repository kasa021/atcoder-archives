/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc098/submissions/42878874
 * Submitted at: 2023-06-24 01:36:04
 * Problem URL: https://atcoder.jp/contests/abc098/tasks/abc098_b
 * Result: CE
 * Execution Time: None ms
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
  string s;
  cin >> n >> s;
  int ans = 0;
  rep(i, n) {
    set<char> st1, st2;
    rep(j, i) st1.insert(s[j]); // s[0]~s[i-1]までの文字を集合に入れる
    rep1(j, i, n) st2.insert(s[j]);　// s[i]~s[n-1]までの文字を集合に入れる
    int cnt = 0;
    for (char c : st1) {
      if (st2.count(c)) cnt++;
    }
    ans = max(ans, cnt);
  }
  cout << ans << endl;
}
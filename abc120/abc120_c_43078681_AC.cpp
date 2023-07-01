/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc120/submissions/43078681
 * Submitted at: 2023-07-01 05:13:30
 * Problem URL: https://atcoder.jp/contests/abc120/tasks/abc120_c
 * Result: AC
 * Execution Time: 12 ms
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
using P = pair<ll, ll>;
using T = tuple<int, int, int>;
using graph = vector<vector<int>>;

int main() {
  string s;
  cin >> s;
  int n = s.size();
  string t = "";
  rep(i, n) {
    if (t.size() == 0) t += s[i];
    else {
      if(t.back() != s[i]) t.pop_back();
      else t += s[i];
    }
  }
  cout << s.size()-t.size() << endl;
}

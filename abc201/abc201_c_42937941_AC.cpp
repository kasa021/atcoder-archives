/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc201/submissions/42937941
 * Submitted at: 2023-06-24 18:31:54
 * Problem URL: https://atcoder.jp/contests/abc201/tasks/abc201_c
 * Result: AC
 * Execution Time: 19 ms
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
  int ans = 0;
  rep(i, 10000) {
    string t = to_string(i);
    while (t.size() < 4) t = "0" + t;
    bool ok = true;
    rep(j, 10) {
      if (s[j] == 'o' && t.find(to_string(j)) == string::npos) ok = false;
      if (s[j] == 'x' && t.find(to_string(j)) != string::npos) ok = false;
    }
    if (ok) {
      ans++;
    }
  }
  cout << ans << endl;
}
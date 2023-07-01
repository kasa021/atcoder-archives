/*
 * Author: kAsA02
 * Submission URL: https://atcoder.jp/contests/abc066/submissions/43080327
 * Submitted at: 2023-07-01 06:36:04
 * Problem URL: https://atcoder.jp/contests/abc066/tasks/abc066_b
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
using ll = long long;
#define rep(i, n) for (ll i = 0; i < (n); ++i)
#define rep1(i, s, n) for (ll i = s; i < n; i++)
#define all(vec) vec.begin(), vec.end()
using P = pair<ll, ll>;
using T = tuple<ll, ll, ll>;
using graph = vector<vector<ll>>;

int main() {
  string s;
  cin >> s;
  s.pop_back();
  while(true){
    if (s.size() % 2 == 1) {
      s.pop_back();
      continue;
    }
    string s1 = s.substr(0, s.size() / 2);
    string s2 = s.substr(s.size() / 2, s.size() / 2);
    if (s1 == s2) {
      cout << s.size() << endl;
      return 0;
    }
    s.pop_back();
  }
  return 0;
}
